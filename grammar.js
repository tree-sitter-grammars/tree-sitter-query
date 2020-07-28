module.exports = grammar({
  name: "scheme",
  rules: {
    program: $ => repeat($._definition),
    _definition: $ =>
      choice(
        $.named_node,
        $.anonymous_node,
        $.grouping,
        $.predicate,
        $.list,
        $.comment
      ),
    _field_name: $ => seq($.identifier, ":"),
    predicate_type: $ => choice("?", "!"),
    quantifier: $ => choice("*", "+", "?"),
    field_definition: $ => seq(field("name", $._field_name), $._definition),
    identifier: $ => /[a-zA-Z0-9.\-_\$#]+/,
    capture: $ => seq("@", field("name", $.identifier)),
    string: $ => /".*"/,
    parameters: $ => repeat1(choice($.capture, $.string)),
    comment: $ => seq(";", /.*/),
    list: $ => seq("[", repeat($._definition), "]", quantifier($), captures($)),
    grouping: $ =>
      seq("(", repeat($._definition), ")", quantifier($), captures($)),
    anonymous_node: $ =>
      seq(/".*"/, optional(field("quantifier", $.quantifier)), captures($)),
    named_node: $ =>
      seq(
        "(",
        field("name", $.identifier),
        repeat(choice($._definition, $.field_definition)),
        ")",
        quantifier($),
        captures($)
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
