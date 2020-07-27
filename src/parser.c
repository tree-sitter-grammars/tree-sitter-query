#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_COLON = 1,
  anon_sym_STAR = 2,
  anon_sym_PLUS = 3,
  anon_sym_QMARK = 4,
  sym_identifier = 5,
  sym_capture = 6,
  aux_sym_string_token1 = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  aux_sym_predicate_token1 = 10,
  sym_program = 11,
  sym__definition = 12,
  sym__field_name = 13,
  sym_quantifier = 14,
  sym_field_definition = 15,
  sym_string = 16,
  sym_parameters = 17,
  sym_grouping = 18,
  sym_anonymous_node = 19,
  sym_named_node = 20,
  sym_predicate = 21,
  aux_sym_program_repeat1 = 22,
  aux_sym_parameters_repeat1 = 23,
  aux_sym_named_node_repeat1 = 24,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_QMARK] = "?",
  [sym_identifier] = "identifier",
  [sym_capture] = "capture",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_predicate_token1] = "predicate_token1",
  [sym_program] = "program",
  [sym__definition] = "_definition",
  [sym__field_name] = "_field_name",
  [sym_quantifier] = "quantifier",
  [sym_field_definition] = "field_definition",
  [sym_string] = "string",
  [sym_parameters] = "parameters",
  [sym_grouping] = "grouping",
  [sym_anonymous_node] = "anonymous_node",
  [sym_named_node] = "named_node",
  [sym_predicate] = "predicate",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_named_node_repeat1] = "named_node_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_identifier] = sym_identifier,
  [sym_capture] = sym_capture,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_predicate_token1] = aux_sym_predicate_token1,
  [sym_program] = sym_program,
  [sym__definition] = sym__definition,
  [sym__field_name] = sym__field_name,
  [sym_quantifier] = sym_quantifier,
  [sym_field_definition] = sym_field_definition,
  [sym_string] = sym_string,
  [sym_parameters] = sym_parameters,
  [sym_grouping] = sym_grouping,
  [sym_anonymous_node] = sym_anonymous_node,
  [sym_named_node] = sym_named_node,
  [sym_predicate] = sym_predicate,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_named_node_repeat1] = aux_sym_named_node_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_capture] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_predicate_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__field_name] = {
    .visible = false,
    .named = true,
  },
  [sym_quantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_field_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_grouping] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymous_node] = {
    .visible = true,
    .named = true,
  },
  [sym_named_node] = {
    .visible = true,
    .named = true,
  },
  [sym_predicate] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_named_node_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_capture = 1,
  field_name = 2,
  field_parameters = 3,
  field_quantifier = 4,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_capture] = "capture",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_quantifier] = "quantifier",
};

static const TSFieldMapSlice ts_field_map_slices[16] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 3},
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 2},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_capture, 1},
  [1] =
    {field_quantifier, 1},
  [2] =
    {field_capture, 2},
    {field_quantifier, 1},
  [4] =
    {field_name, 1},
  [5] =
    {field_capture, 3},
    {field_name, 1},
  [7] =
    {field_name, 1},
    {field_quantifier, 3},
  [9] =
    {field_name, 0},
  [10] =
    {field_parameters, 2},
  [11] =
    {field_capture, 3},
  [12] =
    {field_quantifier, 3},
  [13] =
    {field_capture, 4},
    {field_name, 1},
    {field_quantifier, 3},
  [16] =
    {field_capture, 4},
    {field_name, 1},
  [18] =
    {field_name, 1},
    {field_quantifier, 4},
  [20] =
    {field_capture, 4},
    {field_quantifier, 3},
  [22] =
    {field_capture, 5},
    {field_name, 1},
    {field_quantifier, 4},
};

static TSSymbol ts_alias_sequences[16][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == '@') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_capture);
      if (lookahead == '$' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_predicate_token1);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_capture] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_predicate_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(35),
    [sym__definition] = STATE(12),
    [sym_grouping] = STATE(12),
    [sym_anonymous_node] = STATE(12),
    [sym_named_node] = STATE(12),
    [sym_predicate] = STATE(12),
    [aux_sym_program_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_string_token1] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(12), 1,
      aux_sym_string_token1,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(18), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym__field_name,
    STATE(2), 7,
      sym__definition,
      sym_field_definition,
      sym_grouping,
      sym_anonymous_node,
      sym_named_node,
      sym_predicate,
      aux_sym_named_node_repeat1,
  [25] = 6,
    ACTIONS(5), 1,
      aux_sym_string_token1,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(20), 1,
      sym_identifier,
    ACTIONS(22), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym__field_name,
    STATE(2), 7,
      sym__definition,
      sym_field_definition,
      sym_grouping,
      sym_anonymous_node,
      sym_named_node,
      sym_predicate,
      aux_sym_named_node_repeat1,
  [50] = 6,
    ACTIONS(5), 1,
      aux_sym_string_token1,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(20), 1,
      sym_identifier,
    ACTIONS(24), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym__field_name,
    STATE(3), 7,
      sym__definition,
      sym_field_definition,
      sym_grouping,
      sym_anonymous_node,
      sym_named_node,
      sym_predicate,
      aux_sym_named_node_repeat1,
  [75] = 5,
    ACTIONS(5), 1,
      aux_sym_string_token1,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(26), 1,
      sym_identifier,
    ACTIONS(28), 1,
      aux_sym_predicate_token1,
    STATE(11), 6,
      sym__definition,
      sym_grouping,
      sym_anonymous_node,
      sym_named_node,
      sym_predicate,
      aux_sym_program_repeat1,
  [96] = 4,
    ACTIONS(34), 1,
      sym_capture,
    STATE(16), 1,
      sym_quantifier,
    ACTIONS(32), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(30), 5,
      ts_builtin_sym_end,
      sym_identifier,
      aux_sym_string_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [115] = 4,
    ACTIONS(38), 1,
      sym_capture,
    STATE(18), 1,
      sym_quantifier,
    ACTIONS(32), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(36), 5,
      ts_builtin_sym_end,
      sym_identifier,
      aux_sym_string_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [134] = 4,
    ACTIONS(42), 1,
      sym_capture,
    STATE(17), 1,
      sym_quantifier,
    ACTIONS(32), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(40), 5,
      ts_builtin_sym_end,
      sym_identifier,
      aux_sym_string_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [153] = 4,
    ACTIONS(46), 1,
      sym_capture,
    STATE(14), 1,
      sym_quantifier,
    ACTIONS(32), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(44), 5,
      ts_builtin_sym_end,
      sym_identifier,
      aux_sym_string_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [172] = 4,
    ACTIONS(50), 1,
      aux_sym_string_token1,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
    STATE(10), 6,
      sym__definition,
      sym_grouping,
      sym_anonymous_node,
      sym_named_node,
      sym_predicate,
      aux_sym_program_repeat1,
  [191] = 4,
    ACTIONS(5), 1,
      aux_sym_string_token1,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    STATE(10), 6,
      sym__definition,
      sym_grouping,
      sym_anonymous_node,
      sym_named_node,
      sym_predicate,
      aux_sym_program_repeat1,
  [209] = 4,
    ACTIONS(5), 1,
      aux_sym_string_token1,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(10), 6,
      sym__definition,
      sym_grouping,
      sym_anonymous_node,
      sym_named_node,
      sym_predicate,
      aux_sym_program_repeat1,
  [227] = 3,
    ACTIONS(5), 1,
      aux_sym_string_token1,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    STATE(31), 5,
      sym__definition,
      sym_grouping,
      sym_anonymous_node,
      sym_named_node,
      sym_predicate,
  [241] = 2,
    ACTIONS(62), 1,
      sym_capture,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      sym_identifier,
      aux_sym_string_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [252] = 1,
    ACTIONS(64), 6,
      ts_builtin_sym_end,
      sym_identifier,
      sym_capture,
      aux_sym_string_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [261] = 2,
    ACTIONS(68), 1,
      sym_capture,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      sym_identifier,
      aux_sym_string_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [272] = 2,
    ACTIONS(72), 1,
      sym_capture,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      sym_identifier,
      aux_sym_string_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [283] = 2,
    ACTIONS(76), 1,
      sym_capture,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      sym_identifier,
      aux_sym_string_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [294] = 1,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      sym_identifier,
      aux_sym_string_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [302] = 1,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      sym_identifier,
      aux_sym_string_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [310] = 1,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      sym_identifier,
      aux_sym_string_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [318] = 1,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      sym_identifier,
      aux_sym_string_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [326] = 1,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      sym_identifier,
      aux_sym_string_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [334] = 4,
    ACTIONS(88), 1,
      sym_capture,
    ACTIONS(90), 1,
      aux_sym_string_token1,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
    STATE(26), 2,
      sym_string,
      aux_sym_parameters_repeat1,
  [348] = 1,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      sym_identifier,
      aux_sym_string_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [356] = 4,
    ACTIONS(96), 1,
      sym_capture,
    ACTIONS(99), 1,
      aux_sym_string_token1,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(26), 2,
      sym_string,
      aux_sym_parameters_repeat1,
  [370] = 1,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      sym_identifier,
      aux_sym_string_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [378] = 1,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      sym_identifier,
      aux_sym_string_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [386] = 1,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      sym_identifier,
      aux_sym_string_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [394] = 4,
    ACTIONS(90), 1,
      aux_sym_string_token1,
    ACTIONS(110), 1,
      sym_capture,
    STATE(34), 1,
      sym_parameters,
    STATE(24), 2,
      sym_string,
      aux_sym_parameters_repeat1,
  [408] = 1,
    ACTIONS(112), 4,
      sym_identifier,
      aux_sym_string_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [415] = 1,
    ACTIONS(114), 3,
      sym_capture,
      aux_sym_string_token1,
      anon_sym_RPAREN,
  [421] = 1,
    ACTIONS(116), 2,
      aux_sym_string_token1,
      anon_sym_LPAREN,
  [426] = 1,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
  [430] = 1,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
  [434] = 1,
    ACTIONS(122), 1,
      anon_sym_COLON,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 115,
  [SMALL_STATE(8)] = 134,
  [SMALL_STATE(9)] = 153,
  [SMALL_STATE(10)] = 172,
  [SMALL_STATE(11)] = 191,
  [SMALL_STATE(12)] = 209,
  [SMALL_STATE(13)] = 227,
  [SMALL_STATE(14)] = 241,
  [SMALL_STATE(15)] = 252,
  [SMALL_STATE(16)] = 261,
  [SMALL_STATE(17)] = 272,
  [SMALL_STATE(18)] = 283,
  [SMALL_STATE(19)] = 294,
  [SMALL_STATE(20)] = 302,
  [SMALL_STATE(21)] = 310,
  [SMALL_STATE(22)] = 318,
  [SMALL_STATE(23)] = 326,
  [SMALL_STATE(24)] = 334,
  [SMALL_STATE(25)] = 348,
  [SMALL_STATE(26)] = 356,
  [SMALL_STATE(27)] = 370,
  [SMALL_STATE(28)] = 378,
  [SMALL_STATE(29)] = 386,
  [SMALL_STATE(30)] = 394,
  [SMALL_STATE(31)] = 408,
  [SMALL_STATE(32)] = 415,
  [SMALL_STATE(33)] = 421,
  [SMALL_STATE(34)] = 426,
  [SMALL_STATE(35)] = 430,
  [SMALL_STATE(36)] = 434,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(36),
  [12] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(8),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2), SHIFT_REPEAT(5),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_named_node_repeat1, 2),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 4, .production_id = 4),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouping, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_node, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 3, .production_id = 4),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 4, .production_id = 6),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 5, .production_id = 13),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_node, 2, .production_id = 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouping, 4, .production_id = 10),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouping, 4, .production_id = 9),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_node, 2, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 4, .production_id = 5),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 6, .production_id = 15),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_anonymous_node, 3, .production_id = 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_predicate, 4, .production_id = 8),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(26),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(32),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 5, .production_id = 11),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_node, 5, .production_id = 12),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouping, 5, .production_id = 14),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 7),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_name, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [120] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_scheme(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
