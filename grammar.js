const PREC = {
  IMMEDIATE_CHILD: 1,

  // Prefer a string over a comment
  COMMENT: 1,
  STRING: 2,
};

module.exports = grammar({
  name: "query",

  extras: $ => [
    $.comment,
    /\s+/,
  ],

  rules: {
    program: $ => repeat($._definition),

    _definition: $ => choice(
      $.named_node,
      $.anonymous_node,
      $.grouping,
      $.predicate,
      $.list,
    ),

    // Expressions that are valid inside a group.
    _group_expression: $ => choice(
      $._definition,
      immediate_child($._group_expression),
    ),

    // Expressions that are valid inside a named node.
    _named_node_expression: $ => choice(
      $._definition,
      $.field_definition,
      immediate_child($._named_node_expression),
    ),

    _string: $ => seq(
      '"',
      repeat(choice(
        token.immediate(prec(PREC.STRING, /[^"\\]+/)),
        $.escape_sequence,
      )),
      '"',
    ),
    // Taken from https://github.com/tree-sitter/tree-sitter-javascript/blob/3f8b62f9befd3cb3b4cb0de22f6595a0aadf76ca/grammar.js#L827
    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xu0-7]/,
        /[0-7]{1,3}/,
        /x[0-9a-fA-F]{2}/,
        /u[0-9a-fA-F]{4}/,
        /u{[0-9a-fA-F]+}/
      )
    )),

    predicate_type: $ => choice("?", "!"),
    quantifier: $ => choice("*", "+", "?"),

    identifier: $ => /[a-zA-Z0-9.\-_\$#]+/,
    capture: $ => seq("@", field("name", $.identifier)),
    string: $ => $._string,
    parameters: $ => repeat1(choice($.capture, $.string, $.identifier)),
    comment: $ => token(prec(PREC.COMMENT, seq(";", /.*/))),
    list: $ => seq("[", repeat($._definition), "]", quantifier($), captures($)),

    grouping: $ => seq(
      "(",
      repeat($._group_expression),
      ")",
      quantifier($),
      captures($),
    ),

    anonymous_node: $ => seq($._string, quantifier($), captures($)),

    named_node: $ => seq(
      "(",
      field("name", $.identifier),
      optional(
        seq(
          optional("."),
          choice(
            repeat1($._named_node_expression),
            seq(
              repeat($._named_node_expression),
              seq($._named_node_expression, "."),
            )
          ),
        ),
      ),
      ")",
      quantifier($),
      captures($)
    ),
    _field_name: $ => seq($.identifier, ":"),
    field_definition: $ => seq(
      field("name", $._field_name),
      $._definition,
    ),

    predicate: $ =>
      seq(
        "(",
        field("name", seq($.identifier, field("type", $.predicate_type))),
        field("parameters", $.parameters),
        ")"
      )
  }
});

function captures($) {
  return optional(repeat($.capture));
}

function quantifier($) {
  return optional(field("quantifier", $.quantifier));
}

function immediate_child(expression) {
  return prec.left(
    PREC.IMMEDIATE_CHILD,
    seq(expression, ".", expression),
  );
}
