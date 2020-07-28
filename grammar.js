module.exports = grammar({
  name: "scheme",
  rules: {
    program: $ => repeat($._definition),
    _definition: $ =>
      choice($.named_node, $.anonymous_node, $.grouping, $.predicate, $.list),
    _field_name: $ => seq($.identifier, ":"),
    predicate_type: $ => choice("?", "!"),
    quantifier: $ => choice("*", "+", "?"),
    field_definition: $ => seq(field("name", $._field_name), $._definition),
    identifier: $ => /[a-z_]+/,
    capture_identifier: $ => /[a-zA-Z0-9.\-_\$&*]+/,
    capture: $ => seq("@", field("name", $.capture_identifier)),
    string: $ => /".*"/,
    parameters: $ => repeat1(choice($.capture, $.string)),
    list: $ =>
      seq(
        "[",
        repeat($._definition),
        "]",
        optional(field("quantifier", $.quantifier)),
        captures($)
      ),
    grouping: $ =>
      seq(
        "(",
        repeat($._definition),
        ")",
        optional(field("quantifier", $.quantifier)),
        captures($)
      ),
    anonymous_node: $ =>
      seq(/".*"/, optional(field("quantifier", $.quantifier)), captures($)),
    named_node: $ =>
      seq(
        "(",
        field("name", $.identifier),
        repeat(choice($._definition, $.field_definition)),
        ")",
        optional(field("quantifier", $.quantifier)),
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
