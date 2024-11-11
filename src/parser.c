#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 145
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 1
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_LT = 1,
  anon_sym_GT = 2,
  anon_sym_LT_SLASH = 3,
  anon_sym_SLASH_GT = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  aux_sym__expression_value_token1 = 7,
  anon_sym_LT_BANG_DASH_DASH = 8,
  aux_sym__public_comment_token1 = 9,
  anon_sym_DASH_DASH_GT = 10,
  anon_sym_LBRACE_BANG_DASH_DASH = 11,
  anon_sym_DASH_DASH_RBRACE = 12,
  anon_sym_LBRACE_POUND = 13,
  anon_sym_if = 14,
  anon_sym_unless = 15,
  anon_sym_for = 16,
  anon_sym_case = 17,
  anon_sym_LBRACE_SLASH = 18,
  anon_sym_else = 19,
  anon_sym_elseif = 20,
  anon_sym_match = 21,
  anon_sym_EQ = 22,
  anon_sym_SQUOTE = 23,
  aux_sym_quoted_attribute_value_token1 = 24,
  anon_sym_DQUOTE = 25,
  aux_sym_quoted_attribute_value_token2 = 26,
  sym_attribute_value = 27,
  sym_tag_name = 28,
  sym_component_name = 29,
  sym_attribute_name = 30,
  sym_directive_name = 31,
  sym_text = 32,
  sym_fragment = 33,
  sym__node = 34,
  sym_tag = 35,
  sym_component = 36,
  sym_block = 37,
  sym_start_tag = 38,
  sym_start_component = 39,
  sym_end_tag = 40,
  sym_end_component = 41,
  sym_self_closing_tag = 42,
  sym_self_closing_component = 43,
  sym_expression = 44,
  sym__expression_value = 45,
  sym_expression_value = 46,
  sym_comment = 47,
  sym__public_comment = 48,
  sym__private_comment = 49,
  sym_start_block = 50,
  sym_block_name = 51,
  sym_end_block = 52,
  sym_subblock = 53,
  sym_subblock_name = 54,
  sym_attribute = 55,
  sym_directive = 56,
  sym_quoted_attribute_value = 57,
  sym__tag_or_component_name = 58,
  aux_sym_fragment_repeat1 = 59,
  aux_sym_block_repeat1 = 60,
  aux_sym_start_tag_repeat1 = 61,
  aux_sym_expression_repeat1 = 62,
  aux_sym__public_comment_repeat1 = 63,
  anon_alias_sym_comment = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__expression_value_token1] = "_expression_value_token1",
  [anon_sym_LT_BANG_DASH_DASH] = "<!--",
  [aux_sym__public_comment_token1] = "_public_comment_token1",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_LBRACE_BANG_DASH_DASH] = "{!--",
  [anon_sym_DASH_DASH_RBRACE] = "--}",
  [anon_sym_LBRACE_POUND] = "{#",
  [anon_sym_if] = "if",
  [anon_sym_unless] = "unless",
  [anon_sym_for] = "for",
  [anon_sym_case] = "case",
  [anon_sym_LBRACE_SLASH] = "{/",
  [anon_sym_else] = "else",
  [anon_sym_elseif] = "elseif",
  [anon_sym_match] = "match",
  [anon_sym_EQ] = "=",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_attribute_value] = "attribute_value",
  [sym_tag_name] = "tag_name",
  [sym_component_name] = "component_name",
  [sym_attribute_name] = "attribute_name",
  [sym_directive_name] = "directive_name",
  [sym_text] = "text",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym_tag] = "tag",
  [sym_component] = "component",
  [sym_block] = "block",
  [sym_start_tag] = "start_tag",
  [sym_start_component] = "start_component",
  [sym_end_tag] = "end_tag",
  [sym_end_component] = "end_component",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_self_closing_component] = "self_closing_component",
  [sym_expression] = "expression",
  [sym__expression_value] = "_expression_value",
  [sym_expression_value] = "expression_value",
  [sym_comment] = "comment",
  [sym__public_comment] = "_public_comment",
  [sym__private_comment] = "_private_comment",
  [sym_start_block] = "start_block",
  [sym_block_name] = "block_name",
  [sym_end_block] = "end_block",
  [sym_subblock] = "subblock",
  [sym_subblock_name] = "subblock_name",
  [sym_attribute] = "attribute",
  [sym_directive] = "directive",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [sym__tag_or_component_name] = "_tag_or_component_name",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym__public_comment_repeat1] = "_public_comment_repeat1",
  [anon_alias_sym_comment] = "comment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__expression_value_token1] = aux_sym__expression_value_token1,
  [anon_sym_LT_BANG_DASH_DASH] = anon_sym_LT_BANG_DASH_DASH,
  [aux_sym__public_comment_token1] = aux_sym__public_comment_token1,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_LBRACE_BANG_DASH_DASH] = anon_sym_LBRACE_BANG_DASH_DASH,
  [anon_sym_DASH_DASH_RBRACE] = anon_sym_DASH_DASH_RBRACE,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_LBRACE_SLASH] = anon_sym_LBRACE_SLASH,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [sym_attribute_value] = sym_attribute_value,
  [sym_tag_name] = sym_tag_name,
  [sym_component_name] = sym_component_name,
  [sym_attribute_name] = sym_attribute_name,
  [sym_directive_name] = sym_directive_name,
  [sym_text] = sym_text,
  [sym_fragment] = sym_fragment,
  [sym__node] = sym__node,
  [sym_tag] = sym_tag,
  [sym_component] = sym_component,
  [sym_block] = sym_block,
  [sym_start_tag] = sym_start_tag,
  [sym_start_component] = sym_start_component,
  [sym_end_tag] = sym_end_tag,
  [sym_end_component] = sym_end_component,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_self_closing_component] = sym_self_closing_component,
  [sym_expression] = sym_expression,
  [sym__expression_value] = sym__expression_value,
  [sym_expression_value] = sym_expression_value,
  [sym_comment] = sym_comment,
  [sym__public_comment] = sym__public_comment,
  [sym__private_comment] = sym__private_comment,
  [sym_start_block] = sym_start_block,
  [sym_block_name] = sym_block_name,
  [sym_end_block] = sym_end_block,
  [sym_subblock] = sym_subblock,
  [sym_subblock_name] = sym_subblock_name,
  [sym_attribute] = sym_attribute,
  [sym_directive] = sym_directive,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [sym__tag_or_component_name] = sym__tag_or_component_name,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym__public_comment_repeat1] = aux_sym__public_comment_repeat1,
  [anon_alias_sym_comment] = anon_alias_sym_comment,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__expression_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__public_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_component_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_name] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_start_component] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_component] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_component] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_value] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_value] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__public_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__private_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_start_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_name] = {
    .visible = true,
    .named = true,
  },
  [sym_end_block] = {
    .visible = true,
    .named = true,
  },
  [sym_subblock] = {
    .visible = true,
    .named = true,
  },
  [sym_subblock_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym__tag_or_component_name] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_fragment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__public_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_comment] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_expression_value,
  },
  [2] = {
    [1] = anon_alias_sym_comment,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__public_comment, 2,
    sym__public_comment,
    anon_alias_sym_comment,
  sym__private_comment, 2,
    sym__private_comment,
    anon_alias_sym_comment,
  aux_sym_expression_repeat1, 2,
    aux_sym_expression_repeat1,
    sym_expression_value,
  aux_sym__public_comment_repeat1, 2,
    aux_sym__public_comment_repeat1,
    anon_alias_sym_comment,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 9,
  [13] = 10,
  [14] = 7,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 20,
  [25] = 25,
  [26] = 19,
  [27] = 27,
  [28] = 21,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 32,
  [50] = 50,
  [51] = 33,
  [52] = 40,
  [53] = 53,
  [54] = 45,
  [55] = 43,
  [56] = 44,
  [57] = 29,
  [58] = 58,
  [59] = 34,
  [60] = 35,
  [61] = 22,
  [62] = 36,
  [63] = 23,
  [64] = 46,
  [65] = 39,
  [66] = 31,
  [67] = 67,
  [68] = 68,
  [69] = 30,
  [70] = 42,
  [71] = 37,
  [72] = 41,
  [73] = 38,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 84,
  [87] = 87,
  [88] = 88,
  [89] = 81,
  [90] = 81,
  [91] = 91,
  [92] = 84,
  [93] = 93,
  [94] = 43,
  [95] = 35,
  [96] = 93,
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 100,
  [101] = 100,
  [102] = 99,
  [103] = 103,
  [104] = 104,
  [105] = 104,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 107,
  [112] = 112,
  [113] = 113,
  [114] = 112,
  [115] = 106,
  [116] = 116,
  [117] = 108,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 121,
  [123] = 120,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 129,
  [135] = 130,
  [136] = 136,
  [137] = 137,
  [138] = 110,
  [139] = 124,
  [140] = 136,
  [141] = 116,
  [142] = 109,
  [143] = 126,
  [144] = 133,
};

static inline bool sym_attribute_value_character_set_1(int32_t c) {
  return (c < '"'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '"' || (c < '{'
      ? (c < '<'
        ? c == '\''
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_tag_name_character_set_1(int32_t c) {
  return (c < '-'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '\''
        ? (c >= ' ' && c <= '"')
        : c <= '\'')))
    : (c <= '-' || (c < '{'
      ? (c < '<'
        ? c == '/'
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_attribute_name_character_set_1(int32_t c) {
  return (c < '"'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '"' || (c < '<'
      ? (c < '/'
        ? c == '\''
        : c <= '/')
      : (c <= '>' || c == '{'))));
}

static inline bool sym_directive_name_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '"')))
    : (c <= '\'' || (c < '{'
      ? (c < '<'
        ? c == '/'
        : c <= '>')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(46);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'c') ADVANCE(96);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '#' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(94);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(91);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(116);
      END_STATE();
    case 15:
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(51);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '}') ADVANCE(73);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 38:
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == '}') ADVANCE(73);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead == '#' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(94);
      END_STATE();
    case 42:
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 43:
      if (eof) ADVANCE(46);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 44:
      if (eof) ADVANCE(46);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(10);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '/') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '#') ADVANCE(74);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '/') ADVANCE(79);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '!') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '!') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(70);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANG_DASH_DASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_RBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE_SLASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_component_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-') ADVANCE(115);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(110);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(114);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'c') ADVANCE(104);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(78);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(80);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(113);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'f') ADVANCE(75);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'f') ADVANCE(82);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'h') ADVANCE(83);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(101);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(112);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(105);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(109);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(77);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(99);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(76);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(100);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(111);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(98);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '}') ADVANCE(73);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_directive_name);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '}') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(122);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 45},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 45},
  [7] = {.lex_state = 45},
  [8] = {.lex_state = 45},
  [9] = {.lex_state = 45},
  [10] = {.lex_state = 45},
  [11] = {.lex_state = 45},
  [12] = {.lex_state = 45},
  [13] = {.lex_state = 45},
  [14] = {.lex_state = 45},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 45},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 43},
  [23] = {.lex_state = 44},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 45},
  [30] = {.lex_state = 45},
  [31] = {.lex_state = 45},
  [32] = {.lex_state = 45},
  [33] = {.lex_state = 45},
  [34] = {.lex_state = 45},
  [35] = {.lex_state = 45},
  [36] = {.lex_state = 45},
  [37] = {.lex_state = 45},
  [38] = {.lex_state = 45},
  [39] = {.lex_state = 45},
  [40] = {.lex_state = 45},
  [41] = {.lex_state = 45},
  [42] = {.lex_state = 45},
  [43] = {.lex_state = 45},
  [44] = {.lex_state = 45},
  [45] = {.lex_state = 45},
  [46] = {.lex_state = 45},
  [47] = {.lex_state = 45},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 45},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 45},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 15},
  [56] = {.lex_state = 15},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 15},
  [61] = {.lex_state = 15},
  [62] = {.lex_state = 15},
  [63] = {.lex_state = 15},
  [64] = {.lex_state = 15},
  [65] = {.lex_state = 15},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 15},
  [68] = {.lex_state = 45},
  [69] = {.lex_state = 15},
  [70] = {.lex_state = 15},
  [71] = {.lex_state = 15},
  [72] = {.lex_state = 15},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 38},
  [81] = {.lex_state = 38},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 38},
  [85] = {.lex_state = 38},
  [86] = {.lex_state = 38},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 38},
  [90] = {.lex_state = 38},
  [91] = {.lex_state = 38},
  [92] = {.lex_state = 38},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 14},
  [96] = {.lex_state = 13},
  [97] = {.lex_state = 38},
  [98] = {.lex_state = 38},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 38},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 41},
  [107] = {.lex_state = 41},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 38},
  [110] = {.lex_state = 38},
  [111] = {.lex_state = 41},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 38},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 41},
  [116] = {.lex_state = 38},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 41},
  [122] = {.lex_state = 41},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 13},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_LBRACE_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_LBRACE_SLASH] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_component_name] = ACTIONS(1),
    [sym_attribute_name] = ACTIONS(1),
    [sym_directive_name] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(128),
    [sym__node] = STATE(16),
    [sym_tag] = STATE(16),
    [sym_component] = STATE(16),
    [sym_block] = STATE(16),
    [sym_start_tag] = STATE(9),
    [sym_start_component] = STATE(10),
    [sym_self_closing_tag] = STATE(34),
    [sym_self_closing_component] = STATE(29),
    [sym_expression] = STATE(16),
    [sym_comment] = STATE(16),
    [sym__public_comment] = STATE(44),
    [sym__private_comment] = STATE(44),
    [sym_start_block] = STATE(5),
    [aux_sym_fragment_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(9),
    [anon_sym_LBRACE_BANG_DASH_DASH] = ACTIONS(11),
    [anon_sym_LBRACE_POUND] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(29), 1,
      sym_text,
    STATE(2), 1,
      sym_start_block,
    STATE(12), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(57), 1,
      sym_self_closing_component,
    STATE(59), 1,
      sym_self_closing_tag,
    STATE(62), 1,
      sym_end_block,
    STATE(56), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(3), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [54] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(27), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(31), 1,
      sym_text,
    STATE(2), 1,
      sym_start_block,
    STATE(12), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(57), 1,
      sym_self_closing_component,
    STATE(59), 1,
      sym_self_closing_tag,
    STATE(66), 1,
      sym_end_block,
    STATE(56), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(15), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [108] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(31), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE_SLASH,
    STATE(2), 1,
      sym_start_block,
    STATE(12), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(31), 1,
      sym_end_block,
    STATE(57), 1,
      sym_self_closing_component,
    STATE(59), 1,
      sym_self_closing_tag,
    STATE(56), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(15), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [162] = 15,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(33), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(35), 1,
      sym_text,
    STATE(2), 1,
      sym_start_block,
    STATE(12), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(36), 1,
      sym_end_block,
    STATE(57), 1,
      sym_self_closing_component,
    STATE(59), 1,
      sym_self_closing_tag,
    STATE(56), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(4), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [216] = 15,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(39), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(9), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_start_component,
    STATE(29), 1,
      sym_self_closing_component,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(46), 1,
      sym_end_tag,
    STATE(44), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(11), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [269] = 15,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(39), 1,
      sym_text,
    ACTIONS(41), 1,
      anon_sym_LT_SLASH,
    STATE(5), 1,
      sym_start_block,
    STATE(9), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_start_component,
    STATE(29), 1,
      sym_self_closing_component,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(65), 1,
      sym_end_component,
    STATE(44), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(11), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [322] = 15,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(39), 1,
      sym_text,
    ACTIONS(43), 1,
      anon_sym_LT_SLASH,
    STATE(5), 1,
      sym_start_block,
    STATE(9), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_start_component,
    STATE(29), 1,
      sym_self_closing_component,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(64), 1,
      sym_end_tag,
    STATE(44), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(11), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [375] = 15,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(37), 1,
      anon_sym_LT_SLASH,
    ACTIONS(45), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(9), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_start_component,
    STATE(29), 1,
      sym_self_closing_component,
    STATE(33), 1,
      sym_end_tag,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(44), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(6), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [428] = 15,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(47), 1,
      anon_sym_LT_SLASH,
    ACTIONS(49), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(9), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_start_component,
    STATE(29), 1,
      sym_self_closing_component,
    STATE(32), 1,
      sym_end_component,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(44), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(14), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [481] = 14,
    ACTIONS(53), 1,
      anon_sym_LT,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(62), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(65), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(68), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(9), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_start_component,
    STATE(29), 1,
      sym_self_closing_component,
    STATE(34), 1,
      sym_self_closing_tag,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    STATE(44), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(11), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [532] = 15,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(43), 1,
      anon_sym_LT_SLASH,
    ACTIONS(71), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(9), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_start_component,
    STATE(29), 1,
      sym_self_closing_component,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(51), 1,
      sym_end_tag,
    STATE(44), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(8), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [585] = 15,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(41), 1,
      anon_sym_LT_SLASH,
    ACTIONS(73), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(9), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_start_component,
    STATE(29), 1,
      sym_self_closing_component,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(49), 1,
      sym_end_component,
    STATE(44), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(7), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [638] = 15,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(39), 1,
      sym_text,
    ACTIONS(47), 1,
      anon_sym_LT_SLASH,
    STATE(5), 1,
      sym_start_block,
    STATE(9), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_start_component,
    STATE(29), 1,
      sym_self_closing_component,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(39), 1,
      sym_end_component,
    STATE(44), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(11), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [691] = 14,
    ACTIONS(75), 1,
      anon_sym_LT,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(84), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(87), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(90), 1,
      anon_sym_LBRACE_SLASH,
    ACTIONS(92), 1,
      sym_text,
    STATE(2), 1,
      sym_start_block,
    STATE(12), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_component,
    STATE(57), 1,
      sym_self_closing_component,
    STATE(59), 1,
      sym_self_closing_tag,
    STATE(56), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(15), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [742] = 14,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(11), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(39), 1,
      sym_text,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_start_block,
    STATE(9), 1,
      sym_start_tag,
    STATE(10), 1,
      sym_start_component,
    STATE(29), 1,
      sym_self_closing_component,
    STATE(34), 1,
      sym_self_closing_tag,
    STATE(44), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(11), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [792] = 6,
    ACTIONS(97), 1,
      anon_sym_GT,
    ACTIONS(99), 1,
      anon_sym_SLASH_GT,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      sym_attribute_name,
    ACTIONS(105), 1,
      sym_directive_name,
    STATE(28), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [814] = 6,
    ACTIONS(97), 1,
      anon_sym_GT,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      sym_attribute_name,
    ACTIONS(105), 1,
      sym_directive_name,
    ACTIONS(107), 1,
      anon_sym_SLASH_GT,
    STATE(21), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [836] = 6,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      sym_attribute_name,
    ACTIONS(105), 1,
      sym_directive_name,
    ACTIONS(109), 1,
      anon_sym_GT,
    ACTIONS(111), 1,
      anon_sym_SLASH_GT,
    STATE(24), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [858] = 6,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      sym_attribute_name,
    ACTIONS(105), 1,
      sym_directive_name,
    ACTIONS(113), 1,
      anon_sym_GT,
    ACTIONS(115), 1,
      anon_sym_SLASH_GT,
    STATE(27), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [880] = 6,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      sym_attribute_name,
    ACTIONS(105), 1,
      sym_directive_name,
    ACTIONS(117), 1,
      anon_sym_GT,
    ACTIONS(119), 1,
      anon_sym_SLASH_GT,
    STATE(27), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [902] = 2,
    ACTIONS(123), 3,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_text,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_DASH_DASH_GT,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
  [916] = 2,
    ACTIONS(127), 3,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_text,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_DASH_DASH_RBRACE,
      anon_sym_LBRACE_POUND,
  [930] = 6,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      sym_attribute_name,
    ACTIONS(105), 1,
      sym_directive_name,
    ACTIONS(113), 1,
      anon_sym_GT,
    ACTIONS(129), 1,
      anon_sym_SLASH_GT,
    STATE(27), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [952] = 5,
    ACTIONS(133), 1,
      anon_sym_else,
    STATE(80), 1,
      sym_subblock_name,
    STATE(85), 1,
      sym_block_name,
    ACTIONS(135), 2,
      anon_sym_elseif,
      anon_sym_match,
    ACTIONS(131), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [972] = 6,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      sym_attribute_name,
    ACTIONS(105), 1,
      sym_directive_name,
    ACTIONS(109), 1,
      anon_sym_GT,
    ACTIONS(137), 1,
      anon_sym_SLASH_GT,
    STATE(20), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [994] = 5,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      sym_attribute_name,
    ACTIONS(147), 1,
      sym_directive_name,
    ACTIONS(139), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(27), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1014] = 6,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      sym_attribute_name,
    ACTIONS(105), 1,
      sym_directive_name,
    ACTIONS(117), 1,
      anon_sym_GT,
    ACTIONS(150), 1,
      anon_sym_SLASH_GT,
    STATE(27), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1036] = 2,
    ACTIONS(154), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(152), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1049] = 2,
    ACTIONS(158), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(156), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1062] = 2,
    ACTIONS(162), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(160), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1075] = 2,
    ACTIONS(166), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(164), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1088] = 2,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(168), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1101] = 2,
    ACTIONS(174), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(172), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1114] = 2,
    ACTIONS(178), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1127] = 2,
    ACTIONS(182), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1140] = 2,
    ACTIONS(186), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(184), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1153] = 2,
    ACTIONS(190), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(188), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1166] = 2,
    ACTIONS(194), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(192), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1179] = 2,
    ACTIONS(198), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(196), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1192] = 2,
    ACTIONS(202), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1205] = 2,
    ACTIONS(206), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(204), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1218] = 2,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(208), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1231] = 2,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(212), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1244] = 2,
    ACTIONS(218), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(216), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1257] = 2,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(220), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1270] = 2,
    ACTIONS(224), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(226), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1282] = 2,
    ACTIONS(228), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(230), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1294] = 2,
    ACTIONS(166), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(164), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1306] = 2,
    ACTIONS(232), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(234), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1318] = 2,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(168), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1330] = 2,
    ACTIONS(198), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(196), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1342] = 2,
    ACTIONS(236), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(238), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1354] = 2,
    ACTIONS(218), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(216), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1366] = 2,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(208), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1378] = 2,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(212), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1390] = 2,
    ACTIONS(154), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(152), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1402] = 2,
    ACTIONS(240), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(242), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1414] = 2,
    ACTIONS(174), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(172), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1426] = 2,
    ACTIONS(178), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(176), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1438] = 2,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(121), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1450] = 2,
    ACTIONS(182), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(180), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1462] = 2,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(125), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1474] = 2,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(220), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1486] = 2,
    ACTIONS(194), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(192), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1498] = 2,
    ACTIONS(162), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(160), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1510] = 2,
    ACTIONS(244), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(246), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1522] = 2,
    ACTIONS(248), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(250), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1534] = 2,
    ACTIONS(158), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(156), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1546] = 2,
    ACTIONS(206), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(204), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1558] = 2,
    ACTIONS(186), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(184), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1570] = 2,
    ACTIONS(202), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(200), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1582] = 2,
    ACTIONS(190), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(188), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1594] = 2,
    ACTIONS(252), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(254), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [1606] = 2,
    ACTIONS(258), 1,
      anon_sym_EQ,
    ACTIONS(256), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [1617] = 2,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(260), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [1628] = 5,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_attribute_value,
    STATE(83), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [1645] = 5,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      sym_attribute_value,
    STATE(82), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [1662] = 1,
    ACTIONS(272), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [1670] = 5,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    ACTIONS(278), 1,
      aux_sym__expression_value_token1,
    STATE(127), 1,
      sym_expression_value,
    STATE(137), 1,
      sym__expression_value,
  [1686] = 5,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    ACTIONS(284), 1,
      aux_sym__expression_value_token1,
    STATE(86), 1,
      aux_sym_expression_repeat1,
    STATE(103), 1,
      sym__expression_value,
  [1702] = 1,
    ACTIONS(286), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [1710] = 1,
    ACTIONS(288), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [1718] = 5,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      aux_sym__expression_value_token1,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      aux_sym_expression_repeat1,
    STATE(103), 1,
      sym__expression_value,
  [1734] = 5,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      aux_sym__expression_value_token1,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      sym_expression_value,
    STATE(137), 1,
      sym__expression_value,
  [1750] = 5,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      aux_sym__expression_value_token1,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      aux_sym_expression_repeat1,
    STATE(103), 1,
      sym__expression_value,
  [1766] = 2,
    STATE(85), 1,
      sym_block_name,
    ACTIONS(131), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [1776] = 1,
    ACTIONS(296), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [1784] = 5,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      aux_sym__expression_value_token1,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      aux_sym_expression_repeat1,
    STATE(103), 1,
      sym__expression_value,
  [1800] = 5,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      aux_sym__expression_value_token1,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      aux_sym_expression_repeat1,
    STATE(103), 1,
      sym__expression_value,
  [1816] = 5,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    ACTIONS(307), 1,
      aux_sym__expression_value_token1,
    STATE(91), 1,
      aux_sym_expression_repeat1,
    STATE(103), 1,
      sym__expression_value,
  [1832] = 5,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      aux_sym__expression_value_token1,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      aux_sym_expression_repeat1,
    STATE(103), 1,
      sym__expression_value,
  [1848] = 2,
    STATE(136), 1,
      sym_block_name,
    ACTIONS(312), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [1858] = 1,
    ACTIONS(208), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [1866] = 1,
    ACTIONS(176), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [1874] = 2,
    STATE(140), 1,
      sym_block_name,
    ACTIONS(312), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [1884] = 4,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      aux_sym__expression_value_token1,
    STATE(144), 1,
      sym__expression_value,
  [1897] = 4,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    ACTIONS(320), 1,
      aux_sym__expression_value_token1,
    STATE(133), 1,
      sym__expression_value,
  [1910] = 4,
    ACTIONS(322), 1,
      aux_sym__public_comment_token1,
    ACTIONS(324), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    STATE(117), 1,
      aux_sym__public_comment_repeat1,
    STATE(126), 1,
      sym__private_comment,
  [1923] = 4,
    ACTIONS(326), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(328), 1,
      aux_sym__public_comment_token1,
    STATE(104), 1,
      aux_sym__public_comment_repeat1,
    STATE(124), 1,
      sym__public_comment,
  [1936] = 4,
    ACTIONS(326), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(328), 1,
      aux_sym__public_comment_token1,
    STATE(105), 1,
      aux_sym__public_comment_repeat1,
    STATE(139), 1,
      sym__public_comment,
  [1949] = 4,
    ACTIONS(322), 1,
      aux_sym__public_comment_token1,
    ACTIONS(324), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    STATE(108), 1,
      aux_sym__public_comment_repeat1,
    STATE(143), 1,
      sym__private_comment,
  [1962] = 2,
    ACTIONS(332), 1,
      aux_sym__expression_value_token1,
    ACTIONS(330), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1970] = 3,
    ACTIONS(328), 1,
      aux_sym__public_comment_token1,
    ACTIONS(334), 1,
      anon_sym_DASH_DASH_GT,
    STATE(112), 1,
      aux_sym__public_comment_repeat1,
  [1980] = 3,
    ACTIONS(328), 1,
      aux_sym__public_comment_token1,
    ACTIONS(336), 1,
      anon_sym_DASH_DASH_GT,
    STATE(112), 1,
      aux_sym__public_comment_repeat1,
  [1990] = 2,
    STATE(135), 1,
      sym__tag_or_component_name,
    ACTIONS(338), 2,
      sym_tag_name,
      sym_component_name,
  [1998] = 2,
    STATE(134), 1,
      sym__tag_or_component_name,
    ACTIONS(340), 2,
      sym_tag_name,
      sym_component_name,
  [2006] = 3,
    ACTIONS(322), 1,
      aux_sym__public_comment_token1,
    ACTIONS(342), 1,
      anon_sym_DASH_DASH_RBRACE,
    STATE(114), 1,
      aux_sym__public_comment_repeat1,
  [2016] = 2,
    ACTIONS(346), 1,
      aux_sym__expression_value_token1,
    ACTIONS(344), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2024] = 2,
    ACTIONS(350), 1,
      aux_sym__expression_value_token1,
    ACTIONS(348), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2032] = 2,
    STATE(129), 1,
      sym__tag_or_component_name,
    ACTIONS(352), 2,
      sym_tag_name,
      sym_component_name,
  [2040] = 3,
    ACTIONS(354), 1,
      aux_sym__public_comment_token1,
    ACTIONS(357), 1,
      anon_sym_DASH_DASH_GT,
    STATE(112), 1,
      aux_sym__public_comment_repeat1,
  [2050] = 2,
    ACTIONS(361), 1,
      aux_sym__expression_value_token1,
    ACTIONS(359), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2058] = 3,
    ACTIONS(357), 1,
      anon_sym_DASH_DASH_RBRACE,
    ACTIONS(363), 1,
      aux_sym__public_comment_token1,
    STATE(114), 1,
      aux_sym__public_comment_repeat1,
  [2068] = 2,
    STATE(130), 1,
      sym__tag_or_component_name,
    ACTIONS(366), 2,
      sym_tag_name,
      sym_component_name,
  [2076] = 2,
    ACTIONS(370), 1,
      aux_sym__expression_value_token1,
    ACTIONS(368), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2084] = 3,
    ACTIONS(322), 1,
      aux_sym__public_comment_token1,
    ACTIONS(372), 1,
      anon_sym_DASH_DASH_RBRACE,
    STATE(114), 1,
      aux_sym__public_comment_repeat1,
  [2094] = 2,
    ACTIONS(374), 1,
      anon_sym_DQUOTE,
    ACTIONS(376), 1,
      aux_sym_quoted_attribute_value_token2,
  [2101] = 2,
    ACTIONS(374), 1,
      anon_sym_SQUOTE,
    ACTIONS(378), 1,
      aux_sym_quoted_attribute_value_token1,
  [2108] = 1,
    ACTIONS(380), 2,
      aux_sym__public_comment_token1,
      anon_sym_DASH_DASH_RBRACE,
  [2113] = 2,
    ACTIONS(382), 1,
      sym_tag_name,
    ACTIONS(384), 1,
      sym_component_name,
  [2120] = 2,
    ACTIONS(386), 1,
      sym_tag_name,
    ACTIONS(388), 1,
      sym_component_name,
  [2127] = 1,
    ACTIONS(380), 2,
      aux_sym__public_comment_token1,
      anon_sym_DASH_DASH_GT,
  [2132] = 1,
    ACTIONS(390), 1,
      anon_sym_DASH_DASH_GT,
  [2136] = 1,
    ACTIONS(392), 1,
      anon_sym_SQUOTE,
  [2140] = 1,
    ACTIONS(394), 1,
      anon_sym_DASH_DASH_RBRACE,
  [2144] = 1,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
  [2148] = 1,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
  [2152] = 1,
    ACTIONS(400), 1,
      anon_sym_GT,
  [2156] = 1,
    ACTIONS(402), 1,
      anon_sym_GT,
  [2160] = 1,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
  [2164] = 1,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
  [2168] = 1,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
  [2172] = 1,
    ACTIONS(408), 1,
      anon_sym_GT,
  [2176] = 1,
    ACTIONS(410), 1,
      anon_sym_GT,
  [2180] = 1,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
  [2184] = 1,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
  [2188] = 1,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
  [2192] = 1,
    ACTIONS(416), 1,
      anon_sym_DASH_DASH_GT,
  [2196] = 1,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
  [2200] = 1,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
  [2204] = 1,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
  [2208] = 1,
    ACTIONS(420), 1,
      anon_sym_DASH_DASH_RBRACE,
  [2212] = 1,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 162,
  [SMALL_STATE(6)] = 216,
  [SMALL_STATE(7)] = 269,
  [SMALL_STATE(8)] = 322,
  [SMALL_STATE(9)] = 375,
  [SMALL_STATE(10)] = 428,
  [SMALL_STATE(11)] = 481,
  [SMALL_STATE(12)] = 532,
  [SMALL_STATE(13)] = 585,
  [SMALL_STATE(14)] = 638,
  [SMALL_STATE(15)] = 691,
  [SMALL_STATE(16)] = 742,
  [SMALL_STATE(17)] = 792,
  [SMALL_STATE(18)] = 814,
  [SMALL_STATE(19)] = 836,
  [SMALL_STATE(20)] = 858,
  [SMALL_STATE(21)] = 880,
  [SMALL_STATE(22)] = 902,
  [SMALL_STATE(23)] = 916,
  [SMALL_STATE(24)] = 930,
  [SMALL_STATE(25)] = 952,
  [SMALL_STATE(26)] = 972,
  [SMALL_STATE(27)] = 994,
  [SMALL_STATE(28)] = 1014,
  [SMALL_STATE(29)] = 1036,
  [SMALL_STATE(30)] = 1049,
  [SMALL_STATE(31)] = 1062,
  [SMALL_STATE(32)] = 1075,
  [SMALL_STATE(33)] = 1088,
  [SMALL_STATE(34)] = 1101,
  [SMALL_STATE(35)] = 1114,
  [SMALL_STATE(36)] = 1127,
  [SMALL_STATE(37)] = 1140,
  [SMALL_STATE(38)] = 1153,
  [SMALL_STATE(39)] = 1166,
  [SMALL_STATE(40)] = 1179,
  [SMALL_STATE(41)] = 1192,
  [SMALL_STATE(42)] = 1205,
  [SMALL_STATE(43)] = 1218,
  [SMALL_STATE(44)] = 1231,
  [SMALL_STATE(45)] = 1244,
  [SMALL_STATE(46)] = 1257,
  [SMALL_STATE(47)] = 1270,
  [SMALL_STATE(48)] = 1282,
  [SMALL_STATE(49)] = 1294,
  [SMALL_STATE(50)] = 1306,
  [SMALL_STATE(51)] = 1318,
  [SMALL_STATE(52)] = 1330,
  [SMALL_STATE(53)] = 1342,
  [SMALL_STATE(54)] = 1354,
  [SMALL_STATE(55)] = 1366,
  [SMALL_STATE(56)] = 1378,
  [SMALL_STATE(57)] = 1390,
  [SMALL_STATE(58)] = 1402,
  [SMALL_STATE(59)] = 1414,
  [SMALL_STATE(60)] = 1426,
  [SMALL_STATE(61)] = 1438,
  [SMALL_STATE(62)] = 1450,
  [SMALL_STATE(63)] = 1462,
  [SMALL_STATE(64)] = 1474,
  [SMALL_STATE(65)] = 1486,
  [SMALL_STATE(66)] = 1498,
  [SMALL_STATE(67)] = 1510,
  [SMALL_STATE(68)] = 1522,
  [SMALL_STATE(69)] = 1534,
  [SMALL_STATE(70)] = 1546,
  [SMALL_STATE(71)] = 1558,
  [SMALL_STATE(72)] = 1570,
  [SMALL_STATE(73)] = 1582,
  [SMALL_STATE(74)] = 1594,
  [SMALL_STATE(75)] = 1606,
  [SMALL_STATE(76)] = 1617,
  [SMALL_STATE(77)] = 1628,
  [SMALL_STATE(78)] = 1645,
  [SMALL_STATE(79)] = 1662,
  [SMALL_STATE(80)] = 1670,
  [SMALL_STATE(81)] = 1686,
  [SMALL_STATE(82)] = 1702,
  [SMALL_STATE(83)] = 1710,
  [SMALL_STATE(84)] = 1718,
  [SMALL_STATE(85)] = 1734,
  [SMALL_STATE(86)] = 1750,
  [SMALL_STATE(87)] = 1766,
  [SMALL_STATE(88)] = 1776,
  [SMALL_STATE(89)] = 1784,
  [SMALL_STATE(90)] = 1800,
  [SMALL_STATE(91)] = 1816,
  [SMALL_STATE(92)] = 1832,
  [SMALL_STATE(93)] = 1848,
  [SMALL_STATE(94)] = 1858,
  [SMALL_STATE(95)] = 1866,
  [SMALL_STATE(96)] = 1874,
  [SMALL_STATE(97)] = 1884,
  [SMALL_STATE(98)] = 1897,
  [SMALL_STATE(99)] = 1910,
  [SMALL_STATE(100)] = 1923,
  [SMALL_STATE(101)] = 1936,
  [SMALL_STATE(102)] = 1949,
  [SMALL_STATE(103)] = 1962,
  [SMALL_STATE(104)] = 1970,
  [SMALL_STATE(105)] = 1980,
  [SMALL_STATE(106)] = 1990,
  [SMALL_STATE(107)] = 1998,
  [SMALL_STATE(108)] = 2006,
  [SMALL_STATE(109)] = 2016,
  [SMALL_STATE(110)] = 2024,
  [SMALL_STATE(111)] = 2032,
  [SMALL_STATE(112)] = 2040,
  [SMALL_STATE(113)] = 2050,
  [SMALL_STATE(114)] = 2058,
  [SMALL_STATE(115)] = 2068,
  [SMALL_STATE(116)] = 2076,
  [SMALL_STATE(117)] = 2084,
  [SMALL_STATE(118)] = 2094,
  [SMALL_STATE(119)] = 2101,
  [SMALL_STATE(120)] = 2108,
  [SMALL_STATE(121)] = 2113,
  [SMALL_STATE(122)] = 2120,
  [SMALL_STATE(123)] = 2127,
  [SMALL_STATE(124)] = 2132,
  [SMALL_STATE(125)] = 2136,
  [SMALL_STATE(126)] = 2140,
  [SMALL_STATE(127)] = 2144,
  [SMALL_STATE(128)] = 2148,
  [SMALL_STATE(129)] = 2152,
  [SMALL_STATE(130)] = 2156,
  [SMALL_STATE(131)] = 2160,
  [SMALL_STATE(132)] = 2164,
  [SMALL_STATE(133)] = 2168,
  [SMALL_STATE(134)] = 2172,
  [SMALL_STATE(135)] = 2176,
  [SMALL_STATE(136)] = 2180,
  [SMALL_STATE(137)] = 2184,
  [SMALL_STATE(138)] = 2188,
  [SMALL_STATE(139)] = 2192,
  [SMALL_STATE(140)] = 2196,
  [SMALL_STATE(141)] = 2200,
  [SMALL_STATE(142)] = 2204,
  [SMALL_STATE(143)] = 2208,
  [SMALL_STATE(144)] = 2212,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(121),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(89),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(101),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(102),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(87),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(11),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(122),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(81),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(100),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(99),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(25),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__public_comment, 3, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__public_comment, 3, .production_id = 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__private_comment, 3, .production_id = 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__private_comment, 3, .production_id = 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(90),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(76),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(75),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, .production_id = 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_block, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_block, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subblock, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_block, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_block, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subblock, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_block, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_block, 4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(97),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(103),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 3),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_name, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 2), SHIFT_REPEAT(123),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock_name, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subblock_name, 1),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 2), SHIFT_REPEAT(120),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [398] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_value, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_surface(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
