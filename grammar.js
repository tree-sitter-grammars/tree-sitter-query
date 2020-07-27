module.exports = grammar({
  name: "tsquery",
  rules: {
    program: $ => repeat($._definition),
    _definition: $ =>
      choice($.named_node, $.anonymous_node, $.grouping, $.predicate),
    _field_name: $ => seq($.identifier, ":"),
    quantifier: $ => choice("*", "+", "?"),
    field_definition: $ => seq(field("name", $._field_name), $._definition),
    identifier: $ => /[a-z_]+/,
    capture: $ => /@[a-zA-Z0-9.\-_\$&*]+/,
    string: $ => /".*"/,
    parameters: $ => repeat1(choice($.capture, $.string)),
    grouping: $ =>
      seq(
        "(",
        repeat1($._definition),
        ")",
        optional(field("quantifier", $.quantifier)),
        optional(field("capture", $.capture))
      ),
    anonymous_node: $ =>
      seq(
        /".*"/,
        optional(field("quantifier", $.quantifier)),
        optional(field("capture", $.capture))
      ),
    named_node: $ =>
      seq(
        "(",
        field("name", $.identifier),
        repeat(choice($._definition, $.field_definition)),
        ")",
        optional(field("quantifier", $.quantifier)),
        optional(field("capture", $.capture))
      ),
    predicate: $ =>
      seq("(", /#[a-zA-Z?_\-.\$]+/, field("parameters", $.parameters), ")")
  }
});
