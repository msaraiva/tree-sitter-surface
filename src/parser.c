#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 193
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 1
#define TOKEN_COUNT 37
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
  sym__code = 8,
  anon_sym_LT_BANG_DASH_DASH = 9,
  aux_sym__public_comment_token1 = 10,
  anon_sym_DASH_DASH_GT = 11,
  anon_sym_LBRACE_BANG_DASH_DASH = 12,
  anon_sym_DASH_DASH_RBRACE = 13,
  anon_sym_LBRACE_POUND = 14,
  anon_sym_if = 15,
  anon_sym_unless = 16,
  anon_sym_for = 17,
  anon_sym_case = 18,
  anon_sym_LBRACE_SLASH = 19,
  anon_sym_else = 20,
  anon_sym_elseif = 21,
  anon_sym_match = 22,
  anon_sym_EQ = 23,
  anon_sym_SQUOTE = 24,
  aux_sym_quoted_attribute_value_token1 = 25,
  anon_sym_DQUOTE = 26,
  aux_sym_quoted_attribute_value_token2 = 27,
  sym_attribute_value = 28,
  sym_tag_name = 29,
  anon_sym_DOT = 30,
  anon_sym_POUND = 31,
  sym__module = 32,
  sym__function = 33,
  sym_attribute_name = 34,
  sym_directive_name = 35,
  sym_text = 36,
  sym_fragment = 37,
  sym__node = 38,
  sym_tag = 39,
  sym_component = 40,
  sym_block = 41,
  sym_start_tag = 42,
  sym_end_tag = 43,
  sym_self_closing_tag = 44,
  sym_start_component = 45,
  sym_end_component = 46,
  sym_self_closing_component = 47,
  sym_self_closing_macro_component = 48,
  sym_start_function_component = 49,
  sym_end_function_component = 50,
  sym_self_closing_function_component = 51,
  sym_start_macro_component = 52,
  sym_end_macro_component = 53,
  sym_expression = 54,
  sym__expression_value = 55,
  sym_expression_value = 56,
  sym_comment = 57,
  sym__public_comment = 58,
  sym__private_comment = 59,
  sym_start_block = 60,
  sym_block_name = 61,
  sym_end_block = 62,
  sym_subblock = 63,
  sym_subblock_name = 64,
  sym_attribute = 65,
  sym_directive = 66,
  sym_quoted_attribute_value = 67,
  sym_component_name = 68,
  sym_function_component_name = 69,
  sym_macro_component_name = 70,
  sym__tag_or_component_name = 71,
  aux_sym_fragment_repeat1 = 72,
  aux_sym_block_repeat1 = 73,
  aux_sym_start_tag_repeat1 = 74,
  aux_sym_expression_repeat1 = 75,
  aux_sym_expression_value_repeat1 = 76,
  aux_sym__public_comment_repeat1 = 77,
  anon_alias_sym_comment = 78,
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
  [sym__code] = "_code",
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
  [anon_sym_DOT] = ".",
  [anon_sym_POUND] = "#",
  [sym__module] = "_module",
  [sym__function] = "_function",
  [sym_attribute_name] = "attribute_name",
  [sym_directive_name] = "directive_name",
  [sym_text] = "text",
  [sym_fragment] = "fragment",
  [sym__node] = "_node",
  [sym_tag] = "tag",
  [sym_component] = "component",
  [sym_block] = "block",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_start_component] = "start_component",
  [sym_end_component] = "end_component",
  [sym_self_closing_component] = "self_closing_component",
  [sym_self_closing_macro_component] = "self_closing_macro_component",
  [sym_start_function_component] = "start_function_component",
  [sym_end_function_component] = "end_function_component",
  [sym_self_closing_function_component] = "self_closing_function_component",
  [sym_start_macro_component] = "start_macro_component",
  [sym_end_macro_component] = "end_macro_component",
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
  [sym_component_name] = "component_name",
  [sym_function_component_name] = "function_component_name",
  [sym_macro_component_name] = "macro_component_name",
  [sym__tag_or_component_name] = "_tag_or_component_name",
  [aux_sym_fragment_repeat1] = "fragment_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_expression_value_repeat1] = "expression_value_repeat1",
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
  [sym__code] = sym__code,
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
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym__module] = sym__module,
  [sym__function] = sym__function,
  [sym_attribute_name] = sym_attribute_name,
  [sym_directive_name] = sym_directive_name,
  [sym_text] = sym_text,
  [sym_fragment] = sym_fragment,
  [sym__node] = sym__node,
  [sym_tag] = sym_tag,
  [sym_component] = sym_component,
  [sym_block] = sym_block,
  [sym_start_tag] = sym_start_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_start_component] = sym_start_component,
  [sym_end_component] = sym_end_component,
  [sym_self_closing_component] = sym_self_closing_component,
  [sym_self_closing_macro_component] = sym_self_closing_macro_component,
  [sym_start_function_component] = sym_start_function_component,
  [sym_end_function_component] = sym_end_function_component,
  [sym_self_closing_function_component] = sym_self_closing_function_component,
  [sym_start_macro_component] = sym_start_macro_component,
  [sym_end_macro_component] = sym_end_macro_component,
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
  [sym_component_name] = sym_component_name,
  [sym_function_component_name] = sym_function_component_name,
  [sym_macro_component_name] = sym_macro_component_name,
  [sym__tag_or_component_name] = sym__tag_or_component_name,
  [aux_sym_fragment_repeat1] = aux_sym_fragment_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_expression_value_repeat1] = aux_sym_expression_value_repeat1,
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
  [sym__code] = {
    .visible = false,
    .named = true,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym__module] = {
    .visible = false,
    .named = true,
  },
  [sym__function] = {
    .visible = false,
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
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_start_component] = {
    .visible = true,
    .named = true,
  },
  [sym_end_component] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_component] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_macro_component] = {
    .visible = true,
    .named = true,
  },
  [sym_start_function_component] = {
    .visible = true,
    .named = true,
  },
  [sym_end_function_component] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_function_component] = {
    .visible = true,
    .named = true,
  },
  [sym_start_macro_component] = {
    .visible = true,
    .named = true,
  },
  [sym_end_macro_component] = {
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
  [sym_component_name] = {
    .visible = true,
    .named = true,
  },
  [sym_function_component_name] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_component_name] = {
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
  [aux_sym_expression_value_repeat1] = {
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 7,
  [14] = 10,
  [15] = 12,
  [16] = 16,
  [17] = 8,
  [18] = 6,
  [19] = 9,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 21,
  [30] = 27,
  [31] = 26,
  [32] = 32,
  [33] = 23,
  [34] = 34,
  [35] = 35,
  [36] = 24,
  [37] = 22,
  [38] = 35,
  [39] = 39,
  [40] = 25,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 52,
  [62] = 62,
  [63] = 50,
  [64] = 64,
  [65] = 65,
  [66] = 48,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 53,
  [72] = 72,
  [73] = 64,
  [74] = 44,
  [75] = 47,
  [76] = 54,
  [77] = 55,
  [78] = 57,
  [79] = 79,
  [80] = 80,
  [81] = 59,
  [82] = 60,
  [83] = 41,
  [84] = 42,
  [85] = 85,
  [86] = 62,
  [87] = 70,
  [88] = 68,
  [89] = 34,
  [90] = 39,
  [91] = 91,
  [92] = 72,
  [93] = 69,
  [94] = 94,
  [95] = 91,
  [96] = 67,
  [97] = 97,
  [98] = 98,
  [99] = 65,
  [100] = 58,
  [101] = 56,
  [102] = 102,
  [103] = 51,
  [104] = 49,
  [105] = 105,
  [106] = 46,
  [107] = 107,
  [108] = 45,
  [109] = 43,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 46,
  [123] = 123,
  [124] = 124,
  [125] = 124,
  [126] = 123,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 120,
  [132] = 132,
  [133] = 133,
  [134] = 123,
  [135] = 72,
  [136] = 120,
  [137] = 137,
  [138] = 138,
  [139] = 138,
  [140] = 140,
  [141] = 137,
  [142] = 142,
  [143] = 143,
  [144] = 143,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 146,
  [153] = 153,
  [154] = 149,
  [155] = 153,
  [156] = 148,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 162,
  [167] = 165,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 157,
  [172] = 172,
  [173] = 173,
  [174] = 147,
  [175] = 158,
  [176] = 173,
  [177] = 177,
  [178] = 168,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 182,
  [187] = 181,
  [188] = 180,
  [189] = 179,
  [190] = 170,
  [191] = 191,
  [192] = 177,
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

static inline bool sym__module_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c >= ' ' && c <= '"')))
    : (c <= '\'' || (c < '{'
      ? (c < '<'
        ? (c >= '-' && c <= '/')
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
      if (eof) ADVANCE(50);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead == 'm') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(119);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          (lookahead < '<' || '>' < lookahead) &&
          lookahead != '}') ADVANCE(99);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(80);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(105);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '=' &&
          lookahead != '}') ADVANCE(129);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '{') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(135);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(55);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(79);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '}') ADVANCE(81);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(83);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 42:
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == '}') ADVANCE(81);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(135);
      END_STATE();
    case 45:
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(105);
      END_STATE();
    case 46:
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 47:
      if (eof) ADVANCE(50);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(135);
      END_STATE();
    case 48:
      if (eof) ADVANCE(50);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(135);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead != 0 &&
          lookahead != '>' &&
          lookahead != '}') ADVANCE(135);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(12);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '/') ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '#') ADVANCE(82);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '/') ADVANCE(87);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(65);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__expression_value_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__code);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__code);
      if (lookahead == '%') ADVANCE(63);
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__code);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '%') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '!') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(78);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '!') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(21);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__public_comment_token1);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACE_BANG_DASH_DASH);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_RBRACE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACE_SLASH);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (!sym_tag_name_character_set_1(lookahead)) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__module);
      if (lookahead == '.') ADVANCE(128);
      if (!sym__module_character_set_1(lookahead)) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__module);
      if (lookahead == '.') ADVANCE(45);
      if (!sym__module_character_set_1(lookahead)) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__function);
      if (!sym__module_character_set_1(lookahead)) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-') ADVANCE(127);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(122);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'a') ADVANCE(126);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'c') ADVANCE(116);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(86);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(88);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'e') ADVANCE(125);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'f') ADVANCE(83);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'f') ADVANCE(90);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'h') ADVANCE(91);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(113);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'l') ADVANCE(124);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'n') ADVANCE(117);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'o') ADVANCE(121);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 'r') ADVANCE(85);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(111);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(84);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(112);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 's') ADVANCE(123);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == 't') ADVANCE(110);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '}') ADVANCE(81);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_attribute_name);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_directive_name);
      if (!sym_directive_name_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(135);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{') ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(135);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 49},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 49},
  [7] = {.lex_state = 49},
  [8] = {.lex_state = 49},
  [9] = {.lex_state = 49},
  [10] = {.lex_state = 49},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 49},
  [13] = {.lex_state = 49},
  [14] = {.lex_state = 49},
  [15] = {.lex_state = 49},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 49},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 49},
  [20] = {.lex_state = 49},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 47},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 48},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 49},
  [42] = {.lex_state = 49},
  [43] = {.lex_state = 49},
  [44] = {.lex_state = 49},
  [45] = {.lex_state = 49},
  [46] = {.lex_state = 49},
  [47] = {.lex_state = 49},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 49},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 49},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 49},
  [55] = {.lex_state = 49},
  [56] = {.lex_state = 49},
  [57] = {.lex_state = 49},
  [58] = {.lex_state = 49},
  [59] = {.lex_state = 49},
  [60] = {.lex_state = 49},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 49},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 49},
  [65] = {.lex_state = 49},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 49},
  [68] = {.lex_state = 49},
  [69] = {.lex_state = 49},
  [70] = {.lex_state = 49},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 49},
  [73] = {.lex_state = 19},
  [74] = {.lex_state = 19},
  [75] = {.lex_state = 19},
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 19},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 49},
  [80] = {.lex_state = 49},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 19},
  [85] = {.lex_state = 19},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 19},
  [90] = {.lex_state = 19},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 49},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 49},
  [98] = {.lex_state = 49},
  [99] = {.lex_state = 19},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 19},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 19},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 49},
  [106] = {.lex_state = 19},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 19},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 17},
  [113] = {.lex_state = 18},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 18},
  [117] = {.lex_state = 17},
  [118] = {.lex_state = 15},
  [119] = {.lex_state = 17},
  [120] = {.lex_state = 42},
  [121] = {.lex_state = 17},
  [122] = {.lex_state = 17},
  [123] = {.lex_state = 42},
  [124] = {.lex_state = 15},
  [125] = {.lex_state = 15},
  [126] = {.lex_state = 42},
  [127] = {.lex_state = 17},
  [128] = {.lex_state = 17},
  [129] = {.lex_state = 17},
  [130] = {.lex_state = 17},
  [131] = {.lex_state = 42},
  [132] = {.lex_state = 17},
  [133] = {.lex_state = 42},
  [134] = {.lex_state = 42},
  [135] = {.lex_state = 17},
  [136] = {.lex_state = 42},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 42},
  [144] = {.lex_state = 42},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 42},
  [148] = {.lex_state = 13},
  [149] = {.lex_state = 13},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 42},
  [152] = {.lex_state = 11},
  [153] = {.lex_state = 49},
  [154] = {.lex_state = 11},
  [155] = {.lex_state = 49},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 42},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 49},
  [161] = {.lex_state = 49},
  [162] = {.lex_state = 13},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 15},
  [170] = {.lex_state = 15},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 15},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 15},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 15},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
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
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym__module] = ACTIONS(1),
    [sym_attribute_name] = ACTIONS(1),
    [sym_directive_name] = ACTIONS(1),
  },
  [1] = {
    [sym_fragment] = STATE(172),
    [sym__node] = STATE(20),
    [sym_tag] = STATE(20),
    [sym_component] = STATE(20),
    [sym_block] = STATE(20),
    [sym_start_tag] = STATE(9),
    [sym_self_closing_tag] = STATE(43),
    [sym_start_component] = STATE(6),
    [sym_self_closing_component] = STATE(44),
    [sym_self_closing_macro_component] = STATE(44),
    [sym_start_function_component] = STATE(13),
    [sym_self_closing_function_component] = STATE(44),
    [sym_start_macro_component] = STATE(155),
    [sym_expression] = STATE(20),
    [sym_comment] = STATE(20),
    [sym__public_comment] = STATE(45),
    [sym__private_comment] = STATE(45),
    [sym_start_block] = STATE(5),
    [aux_sym_fragment_repeat1] = STATE(20),
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
  [0] = 17,
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
    STATE(4), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_function_component,
    STATE(18), 1,
      sym_start_component,
    STATE(19), 1,
      sym_start_tag,
    STATE(87), 1,
      sym_end_block,
    STATE(109), 1,
      sym_self_closing_tag,
    STATE(153), 1,
      sym_start_macro_component,
    STATE(108), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(74), 3,
      sym_self_closing_component,
      sym_self_closing_macro_component,
      sym_self_closing_function_component,
    STATE(11), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [62] = 17,
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
    ACTIONS(29), 1,
      sym_text,
    ACTIONS(31), 1,
      anon_sym_LBRACE_SLASH,
    STATE(4), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_function_component,
    STATE(18), 1,
      sym_start_component,
    STATE(19), 1,
      sym_start_tag,
    STATE(70), 1,
      sym_end_block,
    STATE(109), 1,
      sym_self_closing_tag,
    STATE(153), 1,
      sym_start_macro_component,
    STATE(108), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(74), 3,
      sym_self_closing_component,
      sym_self_closing_macro_component,
      sym_self_closing_function_component,
    STATE(11), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [124] = 17,
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
    ACTIONS(33), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_function_component,
    STATE(18), 1,
      sym_start_component,
    STATE(19), 1,
      sym_start_tag,
    STATE(101), 1,
      sym_end_block,
    STATE(109), 1,
      sym_self_closing_tag,
    STATE(153), 1,
      sym_start_macro_component,
    STATE(108), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(74), 3,
      sym_self_closing_component,
      sym_self_closing_macro_component,
      sym_self_closing_function_component,
    STATE(2), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [186] = 17,
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
      anon_sym_LBRACE_SLASH,
    ACTIONS(35), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_function_component,
    STATE(18), 1,
      sym_start_component,
    STATE(19), 1,
      sym_start_tag,
    STATE(56), 1,
      sym_end_block,
    STATE(109), 1,
      sym_self_closing_tag,
    STATE(153), 1,
      sym_start_macro_component,
    STATE(108), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(74), 3,
      sym_self_closing_component,
      sym_self_closing_macro_component,
      sym_self_closing_function_component,
    STATE(3), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [248] = 17,
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
    STATE(6), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_function_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(51), 1,
      sym_end_component,
    STATE(155), 1,
      sym_start_macro_component,
    STATE(45), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(44), 3,
      sym_self_closing_component,
      sym_self_closing_macro_component,
      sym_self_closing_function_component,
    STATE(14), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [309] = 17,
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
    ACTIONS(43), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_function_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(103), 1,
      sym_end_function_component,
    STATE(155), 1,
      sym_start_macro_component,
    STATE(45), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(44), 3,
      sym_self_closing_component,
      sym_self_closing_macro_component,
      sym_self_closing_function_component,
    STATE(8), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [370] = 17,
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
    ACTIONS(45), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_function_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(88), 1,
      sym_end_function_component,
    STATE(155), 1,
      sym_start_macro_component,
    STATE(45), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(44), 3,
      sym_self_closing_component,
      sym_self_closing_macro_component,
      sym_self_closing_function_component,
    STATE(16), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [431] = 17,
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
    STATE(6), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_function_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(49), 1,
      sym_end_tag,
    STATE(155), 1,
      sym_start_macro_component,
    STATE(45), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(44), 3,
      sym_self_closing_component,
      sym_self_closing_macro_component,
      sym_self_closing_function_component,
    STATE(15), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [492] = 17,
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
    ACTIONS(45), 1,
      sym_text,
    ACTIONS(51), 1,
      anon_sym_LT_SLASH,
    STATE(5), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_function_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(88), 1,
      sym_end_component,
    STATE(155), 1,
      sym_start_macro_component,
    STATE(45), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(44), 3,
      sym_self_closing_component,
      sym_self_closing_macro_component,
      sym_self_closing_function_component,
    STATE(16), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [553] = 16,
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
      anon_sym_LBRACE_SLASH,
    ACTIONS(70), 1,
      sym_text,
    STATE(4), 1,
      sym_start_block,
    STATE(7), 1,
      sym_start_function_component,
    STATE(18), 1,
      sym_start_component,
    STATE(19), 1,
      sym_start_tag,
    STATE(109), 1,
      sym_self_closing_tag,
    STATE(153), 1,
      sym_start_macro_component,
    STATE(108), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(74), 3,
      sym_self_closing_component,
      sym_self_closing_macro_component,
      sym_self_closing_function_component,
    STATE(11), 8,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      sym_subblock,
      aux_sym_block_repeat1,
  [612] = 17,
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
    ACTIONS(45), 1,
      sym_text,
    ACTIONS(73), 1,
      anon_sym_LT_SLASH,
    STATE(5), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_function_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(73), 1,
      sym_end_tag,
    STATE(155), 1,
      sym_start_macro_component,
    STATE(45), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(44), 3,
      sym_self_closing_component,
      sym_self_closing_macro_component,
      sym_self_closing_function_component,
    STATE(16), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [673] = 17,
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
    ACTIONS(75), 1,
      anon_sym_LT_SLASH,
    ACTIONS(77), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_function_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(51), 1,
      sym_end_function_component,
    STATE(155), 1,
      sym_start_macro_component,
    STATE(45), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(44), 3,
      sym_self_closing_component,
      sym_self_closing_macro_component,
      sym_self_closing_function_component,
    STATE(17), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [734] = 17,
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
    STATE(6), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_function_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(68), 1,
      sym_end_component,
    STATE(155), 1,
      sym_start_macro_component,
    STATE(45), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(44), 3,
      sym_self_closing_component,
      sym_self_closing_macro_component,
      sym_self_closing_function_component,
    STATE(16), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [795] = 17,
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
    ACTIONS(45), 1,
      sym_text,
    ACTIONS(47), 1,
      anon_sym_LT_SLASH,
    STATE(5), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_function_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(64), 1,
      sym_end_tag,
    STATE(155), 1,
      sym_start_macro_component,
    STATE(45), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(44), 3,
      sym_self_closing_component,
      sym_self_closing_macro_component,
      sym_self_closing_function_component,
    STATE(16), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [856] = 16,
    ACTIONS(81), 1,
      anon_sym_LT,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(90), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    ACTIONS(93), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(96), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_function_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(155), 1,
      sym_start_macro_component,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
    STATE(45), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(44), 3,
      sym_self_closing_component,
      sym_self_closing_macro_component,
      sym_self_closing_function_component,
    STATE(16), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [915] = 17,
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
    ACTIONS(45), 1,
      sym_text,
    ACTIONS(75), 1,
      anon_sym_LT_SLASH,
    STATE(5), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_function_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(68), 1,
      sym_end_function_component,
    STATE(155), 1,
      sym_start_macro_component,
    STATE(45), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(44), 3,
      sym_self_closing_component,
      sym_self_closing_macro_component,
      sym_self_closing_function_component,
    STATE(16), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [976] = 17,
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
    ACTIONS(51), 1,
      anon_sym_LT_SLASH,
    ACTIONS(99), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_function_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(103), 1,
      sym_end_component,
    STATE(155), 1,
      sym_start_macro_component,
    STATE(45), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(44), 3,
      sym_self_closing_component,
      sym_self_closing_macro_component,
      sym_self_closing_function_component,
    STATE(10), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [1037] = 17,
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
    ACTIONS(73), 1,
      anon_sym_LT_SLASH,
    ACTIONS(101), 1,
      sym_text,
    STATE(5), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_function_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(104), 1,
      sym_end_tag,
    STATE(155), 1,
      sym_start_macro_component,
    STATE(45), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(44), 3,
      sym_self_closing_component,
      sym_self_closing_macro_component,
      sym_self_closing_function_component,
    STATE(12), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [1098] = 16,
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
    ACTIONS(45), 1,
      sym_text,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_start_block,
    STATE(6), 1,
      sym_start_component,
    STATE(9), 1,
      sym_start_tag,
    STATE(13), 1,
      sym_start_function_component,
    STATE(43), 1,
      sym_self_closing_tag,
    STATE(155), 1,
      sym_start_macro_component,
    STATE(45), 2,
      sym__public_comment,
      sym__private_comment,
    STATE(44), 3,
      sym_self_closing_component,
      sym_self_closing_macro_component,
      sym_self_closing_function_component,
    STATE(16), 7,
      sym__node,
      sym_tag,
      sym_component,
      sym_block,
      sym_expression,
      sym_comment,
      aux_sym_fragment_repeat1,
  [1156] = 6,
    ACTIONS(105), 1,
      anon_sym_GT,
    ACTIONS(107), 1,
      anon_sym_SLASH_GT,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    STATE(33), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1178] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(115), 1,
      anon_sym_GT,
    ACTIONS(117), 1,
      anon_sym_SLASH_GT,
    STATE(26), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1200] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(119), 1,
      anon_sym_GT,
    ACTIONS(121), 1,
      anon_sym_SLASH_GT,
    STATE(28), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1222] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(123), 1,
      anon_sym_GT,
    ACTIONS(125), 1,
      anon_sym_SLASH_GT,
    STATE(30), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1244] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(127), 1,
      anon_sym_GT,
    ACTIONS(129), 1,
      anon_sym_SLASH_GT,
    STATE(38), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1266] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(131), 1,
      anon_sym_GT,
    ACTIONS(133), 1,
      anon_sym_SLASH_GT,
    STATE(28), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1288] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(135), 1,
      anon_sym_GT,
    ACTIONS(137), 1,
      anon_sym_SLASH_GT,
    STATE(28), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1310] = 5,
    ACTIONS(141), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      sym_attribute_name,
    ACTIONS(147), 1,
      sym_directive_name,
    ACTIONS(139), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(28), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1330] = 6,
    ACTIONS(105), 1,
      anon_sym_GT,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(150), 1,
      anon_sym_SLASH_GT,
    STATE(23), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1352] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(135), 1,
      anon_sym_GT,
    ACTIONS(152), 1,
      anon_sym_SLASH_GT,
    STATE(28), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1374] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(131), 1,
      anon_sym_GT,
    ACTIONS(154), 1,
      anon_sym_SLASH_GT,
    STATE(28), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1396] = 5,
    ACTIONS(158), 1,
      anon_sym_else,
    STATE(140), 1,
      sym_block_name,
    STATE(142), 1,
      sym_subblock_name,
    ACTIONS(160), 2,
      anon_sym_elseif,
      anon_sym_match,
    ACTIONS(156), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [1416] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(119), 1,
      anon_sym_GT,
    ACTIONS(162), 1,
      anon_sym_SLASH_GT,
    STATE(28), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1438] = 2,
    ACTIONS(166), 3,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_text,
    ACTIONS(164), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_DASH_DASH_RBRACE,
      anon_sym_LBRACE_POUND,
  [1452] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(168), 1,
      anon_sym_GT,
    ACTIONS(170), 1,
      anon_sym_SLASH_GT,
    STATE(28), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1474] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(123), 1,
      anon_sym_GT,
    ACTIONS(172), 1,
      anon_sym_SLASH_GT,
    STATE(27), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1496] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(115), 1,
      anon_sym_GT,
    ACTIONS(174), 1,
      anon_sym_SLASH_GT,
    STATE(31), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1518] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(168), 1,
      anon_sym_GT,
    ACTIONS(176), 1,
      anon_sym_SLASH_GT,
    STATE(28), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1540] = 2,
    ACTIONS(180), 3,
      anon_sym_LT,
      anon_sym_LBRACE,
      sym_text,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_DASH_DASH_GT,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
  [1554] = 6,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      sym_attribute_name,
    ACTIONS(113), 1,
      sym_directive_name,
    ACTIONS(127), 1,
      anon_sym_GT,
    ACTIONS(182), 1,
      anon_sym_SLASH_GT,
    STATE(35), 4,
      sym_expression,
      sym_attribute,
      sym_directive,
      aux_sym_start_tag_repeat1,
  [1576] = 2,
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
  [1589] = 2,
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
  [1602] = 2,
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
  [1615] = 2,
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
  [1628] = 2,
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
  [1641] = 2,
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
  [1654] = 2,
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
  [1667] = 5,
    ACTIONS(212), 1,
      sym_tag_name,
    ACTIONS(214), 1,
      anon_sym_DOT,
    ACTIONS(216), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      sym__module,
    STATE(168), 4,
      sym_component_name,
      sym_function_component_name,
      sym_macro_component_name,
      sym__tag_or_component_name,
  [1686] = 2,
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
  [1699] = 5,
    ACTIONS(214), 1,
      anon_sym_DOT,
    ACTIONS(216), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      sym__module,
    ACTIONS(224), 1,
      sym_tag_name,
    STATE(189), 4,
      sym_component_name,
      sym_function_component_name,
      sym_macro_component_name,
      sym__tag_or_component_name,
  [1718] = 2,
    ACTIONS(228), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(226), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1731] = 5,
    ACTIONS(214), 1,
      anon_sym_DOT,
    ACTIONS(216), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      sym__module,
    ACTIONS(230), 1,
      sym_tag_name,
    STATE(188), 4,
      sym_component_name,
      sym_function_component_name,
      sym_macro_component_name,
      sym__tag_or_component_name,
  [1750] = 5,
    ACTIONS(214), 1,
      anon_sym_DOT,
    ACTIONS(216), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      sym__module,
    ACTIONS(232), 1,
      sym_tag_name,
    STATE(187), 4,
      sym_component_name,
      sym_function_component_name,
      sym_macro_component_name,
      sym__tag_or_component_name,
  [1769] = 2,
    ACTIONS(236), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(234), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1782] = 2,
    ACTIONS(240), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(238), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1795] = 2,
    ACTIONS(244), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(242), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1808] = 2,
    ACTIONS(248), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(246), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1821] = 2,
    ACTIONS(252), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(250), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1834] = 2,
    ACTIONS(256), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(254), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1847] = 2,
    ACTIONS(260), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(258), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1860] = 5,
    ACTIONS(214), 1,
      anon_sym_DOT,
    ACTIONS(216), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      sym__module,
    ACTIONS(262), 1,
      sym_tag_name,
    STATE(180), 4,
      sym_component_name,
      sym_function_component_name,
      sym_macro_component_name,
      sym__tag_or_component_name,
  [1879] = 2,
    ACTIONS(266), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(264), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1892] = 5,
    ACTIONS(214), 1,
      anon_sym_DOT,
    ACTIONS(216), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      sym__module,
    ACTIONS(268), 1,
      sym_tag_name,
    STATE(179), 4,
      sym_component_name,
      sym_function_component_name,
      sym_macro_component_name,
      sym__tag_or_component_name,
  [1911] = 2,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(270), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1924] = 2,
    ACTIONS(276), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(274), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1937] = 5,
    ACTIONS(214), 1,
      anon_sym_DOT,
    ACTIONS(216), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      sym__module,
    ACTIONS(278), 1,
      sym_tag_name,
    STATE(178), 4,
      sym_component_name,
      sym_function_component_name,
      sym_macro_component_name,
      sym__tag_or_component_name,
  [1956] = 2,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(280), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1969] = 2,
    ACTIONS(286), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(284), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1982] = 2,
    ACTIONS(290), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(288), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [1995] = 2,
    ACTIONS(294), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(292), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [2008] = 5,
    ACTIONS(214), 1,
      anon_sym_DOT,
    ACTIONS(216), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      sym__module,
    ACTIONS(296), 1,
      sym_tag_name,
    STATE(181), 4,
      sym_component_name,
      sym_function_component_name,
      sym_macro_component_name,
      sym__tag_or_component_name,
  [2027] = 2,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(298), 6,
      ts_builtin_sym_end,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [2040] = 2,
    ACTIONS(272), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(270), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2052] = 2,
    ACTIONS(198), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(196), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2064] = 2,
    ACTIONS(210), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(208), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2076] = 2,
    ACTIONS(236), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(234), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2088] = 2,
    ACTIONS(240), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(238), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2100] = 2,
    ACTIONS(248), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(246), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2112] = 2,
    ACTIONS(302), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(304), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [2124] = 2,
    ACTIONS(306), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(308), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [2136] = 2,
    ACTIONS(256), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(254), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2148] = 2,
    ACTIONS(260), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(258), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2160] = 2,
    ACTIONS(186), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(184), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2172] = 2,
    ACTIONS(190), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(188), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2184] = 2,
    ACTIONS(310), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(312), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2196] = 2,
    ACTIONS(266), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(264), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2208] = 2,
    ACTIONS(294), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(292), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2220] = 2,
    ACTIONS(286), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(284), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2232] = 2,
    ACTIONS(166), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(164), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2244] = 2,
    ACTIONS(180), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(178), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2256] = 7,
    ACTIONS(214), 1,
      anon_sym_DOT,
    ACTIONS(216), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      sym__module,
    ACTIONS(314), 1,
      sym_tag_name,
    STATE(29), 1,
      sym_macro_component_name,
    STATE(36), 1,
      sym_component_name,
    STATE(40), 1,
      sym_function_component_name,
  [2278] = 2,
    ACTIONS(300), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(298), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2290] = 2,
    ACTIONS(290), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(288), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2302] = 2,
    ACTIONS(316), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(318), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [2314] = 7,
    ACTIONS(214), 1,
      anon_sym_DOT,
    ACTIONS(216), 1,
      anon_sym_POUND,
    ACTIONS(218), 1,
      sym__module,
    ACTIONS(320), 1,
      sym_tag_name,
    STATE(21), 1,
      sym_macro_component_name,
    STATE(24), 1,
      sym_component_name,
    STATE(25), 1,
      sym_function_component_name,
  [2336] = 2,
    ACTIONS(282), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(280), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2348] = 2,
    ACTIONS(322), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(324), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [2360] = 2,
    ACTIONS(326), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(328), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [2372] = 2,
    ACTIONS(276), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(274), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2384] = 2,
    ACTIONS(252), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(250), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2396] = 2,
    ACTIONS(244), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(242), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2408] = 2,
    ACTIONS(330), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(332), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2420] = 2,
    ACTIONS(228), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(226), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2432] = 2,
    ACTIONS(222), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(220), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2444] = 2,
    ACTIONS(334), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(336), 5,
      anon_sym_LT_SLASH,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      sym_text,
  [2456] = 2,
    ACTIONS(206), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(204), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2468] = 2,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(340), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2480] = 2,
    ACTIONS(202), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(200), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2492] = 2,
    ACTIONS(194), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(192), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2504] = 2,
    ACTIONS(342), 2,
      anon_sym_LT,
      anon_sym_LBRACE,
    ACTIONS(344), 5,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_LBRACE_BANG_DASH_DASH,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_SLASH,
      sym_text,
  [2516] = 3,
    ACTIONS(348), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      sym_attribute_name,
    ACTIONS(346), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_directive_name,
  [2529] = 2,
    ACTIONS(354), 1,
      anon_sym_EQ,
    ACTIONS(352), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [2540] = 3,
    ACTIONS(358), 1,
      sym__function,
    ACTIONS(360), 1,
      sym_attribute_name,
    ACTIONS(356), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_directive_name,
  [2553] = 5,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(366), 1,
      sym_attribute_value,
    STATE(130), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [2570] = 5,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(368), 1,
      sym_attribute_value,
    STATE(127), 2,
      sym_expression,
      sym_quoted_attribute_value,
  [2587] = 3,
    ACTIONS(372), 1,
      sym__function,
    ACTIONS(374), 1,
      sym_attribute_name,
    ACTIONS(370), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_directive_name,
  [2600] = 2,
    ACTIONS(378), 1,
      anon_sym_EQ,
    ACTIONS(376), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [2611] = 2,
    STATE(140), 1,
      sym_block_name,
    ACTIONS(156), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [2621] = 1,
    ACTIONS(380), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [2629] = 5,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    ACTIONS(386), 1,
      aux_sym__expression_value_token1,
    STATE(134), 1,
      aux_sym_expression_repeat1,
    STATE(151), 1,
      sym__expression_value,
  [2645] = 1,
    ACTIONS(388), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [2653] = 1,
    ACTIONS(204), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [2661] = 5,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      aux_sym__expression_value_token1,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_expression_repeat1,
    STATE(151), 1,
      sym__expression_value,
  [2677] = 2,
    STATE(186), 1,
      sym_block_name,
    ACTIONS(392), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [2687] = 2,
    STATE(182), 1,
      sym_block_name,
    ACTIONS(392), 4,
      anon_sym_if,
      anon_sym_unless,
      anon_sym_for,
      anon_sym_case,
  [2697] = 5,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      aux_sym__expression_value_token1,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_expression_repeat1,
    STATE(151), 1,
      sym__expression_value,
  [2713] = 1,
    ACTIONS(396), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [2721] = 1,
    ACTIONS(356), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [2729] = 1,
    ACTIONS(398), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [2737] = 1,
    ACTIONS(400), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [2745] = 5,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      aux_sym__expression_value_token1,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      aux_sym_expression_repeat1,
    STATE(151), 1,
      sym__expression_value,
  [2761] = 1,
    ACTIONS(404), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [2769] = 5,
    ACTIONS(406), 1,
      anon_sym_LBRACE,
    ACTIONS(409), 1,
      anon_sym_RBRACE,
    ACTIONS(411), 1,
      aux_sym__expression_value_token1,
    STATE(133), 1,
      aux_sym_expression_repeat1,
    STATE(151), 1,
      sym__expression_value,
  [2785] = 5,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      aux_sym__expression_value_token1,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_expression_repeat1,
    STATE(151), 1,
      sym__expression_value,
  [2801] = 1,
    ACTIONS(298), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LBRACE,
      sym_attribute_name,
      sym_directive_name,
  [2809] = 5,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      aux_sym__expression_value_token1,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      aux_sym_expression_repeat1,
    STATE(151), 1,
      sym__expression_value,
  [2825] = 4,
    ACTIONS(418), 1,
      aux_sym__public_comment_token1,
    ACTIONS(420), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    STATE(146), 1,
      aux_sym__public_comment_repeat1,
    STATE(173), 1,
      sym__private_comment,
  [2838] = 4,
    ACTIONS(422), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(424), 1,
      aux_sym__public_comment_token1,
    STATE(156), 1,
      aux_sym__public_comment_repeat1,
    STATE(170), 1,
      sym__public_comment,
  [2851] = 4,
    ACTIONS(422), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(424), 1,
      aux_sym__public_comment_token1,
    STATE(148), 1,
      aux_sym__public_comment_repeat1,
    STATE(190), 1,
      sym__public_comment,
  [2864] = 4,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
    ACTIONS(428), 1,
      sym__code,
    STATE(150), 1,
      aux_sym_expression_value_repeat1,
    STATE(191), 1,
      sym_expression_value,
  [2877] = 4,
    ACTIONS(418), 1,
      aux_sym__public_comment_token1,
    ACTIONS(420), 1,
      anon_sym_LBRACE_BANG_DASH_DASH,
    STATE(152), 1,
      aux_sym__public_comment_repeat1,
    STATE(176), 1,
      sym__private_comment,
  [2890] = 4,
    ACTIONS(428), 1,
      sym__code,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    STATE(150), 1,
      aux_sym_expression_value_repeat1,
    STATE(185), 1,
      sym_expression_value,
  [2903] = 4,
    ACTIONS(432), 1,
      anon_sym_LBRACE,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
    ACTIONS(436), 1,
      aux_sym__expression_value_token1,
    STATE(192), 1,
      sym__expression_value,
  [2916] = 4,
    ACTIONS(432), 1,
      anon_sym_LBRACE,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
    ACTIONS(440), 1,
      aux_sym__expression_value_token1,
    STATE(177), 1,
      sym__expression_value,
  [2929] = 3,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    ACTIONS(444), 1,
      sym__code,
    STATE(145), 1,
      aux_sym_expression_value_repeat1,
  [2939] = 3,
    ACTIONS(418), 1,
      aux_sym__public_comment_token1,
    ACTIONS(447), 1,
      anon_sym_DASH_DASH_RBRACE,
    STATE(154), 1,
      aux_sym__public_comment_repeat1,
  [2949] = 2,
    ACTIONS(451), 1,
      aux_sym__expression_value_token1,
    ACTIONS(449), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2957] = 3,
    ACTIONS(424), 1,
      aux_sym__public_comment_token1,
    ACTIONS(453), 1,
      anon_sym_DASH_DASH_GT,
    STATE(149), 1,
      aux_sym__public_comment_repeat1,
  [2967] = 3,
    ACTIONS(455), 1,
      aux_sym__public_comment_token1,
    ACTIONS(458), 1,
      anon_sym_DASH_DASH_GT,
    STATE(149), 1,
      aux_sym__public_comment_repeat1,
  [2977] = 3,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
    ACTIONS(462), 1,
      sym__code,
    STATE(145), 1,
      aux_sym_expression_value_repeat1,
  [2987] = 2,
    ACTIONS(466), 1,
      aux_sym__expression_value_token1,
    ACTIONS(464), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2995] = 3,
    ACTIONS(418), 1,
      aux_sym__public_comment_token1,
    ACTIONS(468), 1,
      anon_sym_DASH_DASH_RBRACE,
    STATE(154), 1,
      aux_sym__public_comment_repeat1,
  [3005] = 3,
    ACTIONS(470), 1,
      anon_sym_LT_SLASH,
    ACTIONS(472), 1,
      sym_text,
    STATE(103), 1,
      sym_end_macro_component,
  [3015] = 3,
    ACTIONS(458), 1,
      anon_sym_DASH_DASH_RBRACE,
    ACTIONS(474), 1,
      aux_sym__public_comment_token1,
    STATE(154), 1,
      aux_sym__public_comment_repeat1,
  [3025] = 3,
    ACTIONS(477), 1,
      anon_sym_LT_SLASH,
    ACTIONS(479), 1,
      sym_text,
    STATE(51), 1,
      sym_end_macro_component,
  [3035] = 3,
    ACTIONS(424), 1,
      aux_sym__public_comment_token1,
    ACTIONS(481), 1,
      anon_sym_DASH_DASH_GT,
    STATE(149), 1,
      aux_sym__public_comment_repeat1,
  [3045] = 2,
    ACTIONS(485), 1,
      aux_sym__expression_value_token1,
    ACTIONS(483), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3053] = 1,
    ACTIONS(487), 2,
      anon_sym_RBRACE,
      sym__code,
  [3058] = 2,
    ACTIONS(489), 1,
      anon_sym_DQUOTE,
    ACTIONS(491), 1,
      aux_sym_quoted_attribute_value_token2,
  [3065] = 1,
    ACTIONS(493), 2,
      anon_sym_LT_SLASH,
      sym_text,
  [3070] = 1,
    ACTIONS(495), 2,
      anon_sym_LT_SLASH,
      sym_text,
  [3075] = 1,
    ACTIONS(497), 2,
      aux_sym__public_comment_token1,
      anon_sym_DASH_DASH_GT,
  [3080] = 1,
    ACTIONS(499), 2,
      anon_sym_RBRACE,
      sym__code,
  [3085] = 2,
    ACTIONS(489), 1,
      anon_sym_SQUOTE,
    ACTIONS(501), 1,
      aux_sym_quoted_attribute_value_token1,
  [3092] = 2,
    ACTIONS(470), 1,
      anon_sym_LT_SLASH,
    STATE(88), 1,
      sym_end_macro_component,
  [3099] = 1,
    ACTIONS(497), 2,
      aux_sym__public_comment_token1,
      anon_sym_DASH_DASH_RBRACE,
  [3104] = 2,
    ACTIONS(477), 1,
      anon_sym_LT_SLASH,
    STATE(68), 1,
      sym_end_macro_component,
  [3111] = 1,
    ACTIONS(503), 1,
      anon_sym_GT,
  [3115] = 1,
    ACTIONS(505), 1,
      sym__module,
  [3119] = 1,
    ACTIONS(507), 1,
      anon_sym_DASH_DASH_GT,
  [3123] = 1,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
  [3127] = 1,
    ACTIONS(509), 1,
      ts_builtin_sym_end,
  [3131] = 1,
    ACTIONS(511), 1,
      anon_sym_DASH_DASH_RBRACE,
  [3135] = 1,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
  [3139] = 1,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
  [3143] = 1,
    ACTIONS(515), 1,
      anon_sym_DASH_DASH_RBRACE,
  [3147] = 1,
    ACTIONS(517), 1,
      anon_sym_RBRACE,
  [3151] = 1,
    ACTIONS(519), 1,
      anon_sym_GT,
  [3155] = 1,
    ACTIONS(521), 1,
      anon_sym_GT,
  [3159] = 1,
    ACTIONS(523), 1,
      anon_sym_GT,
  [3163] = 1,
    ACTIONS(525), 1,
      anon_sym_GT,
  [3167] = 1,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
  [3171] = 1,
    ACTIONS(529), 1,
      anon_sym_DQUOTE,
  [3175] = 1,
    ACTIONS(529), 1,
      anon_sym_SQUOTE,
  [3179] = 1,
    ACTIONS(531), 1,
      anon_sym_RBRACE,
  [3183] = 1,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
  [3187] = 1,
    ACTIONS(535), 1,
      anon_sym_GT,
  [3191] = 1,
    ACTIONS(537), 1,
      anon_sym_GT,
  [3195] = 1,
    ACTIONS(539), 1,
      anon_sym_GT,
  [3199] = 1,
    ACTIONS(541), 1,
      anon_sym_DASH_DASH_GT,
  [3203] = 1,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
  [3207] = 1,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 62,
  [SMALL_STATE(4)] = 124,
  [SMALL_STATE(5)] = 186,
  [SMALL_STATE(6)] = 248,
  [SMALL_STATE(7)] = 309,
  [SMALL_STATE(8)] = 370,
  [SMALL_STATE(9)] = 431,
  [SMALL_STATE(10)] = 492,
  [SMALL_STATE(11)] = 553,
  [SMALL_STATE(12)] = 612,
  [SMALL_STATE(13)] = 673,
  [SMALL_STATE(14)] = 734,
  [SMALL_STATE(15)] = 795,
  [SMALL_STATE(16)] = 856,
  [SMALL_STATE(17)] = 915,
  [SMALL_STATE(18)] = 976,
  [SMALL_STATE(19)] = 1037,
  [SMALL_STATE(20)] = 1098,
  [SMALL_STATE(21)] = 1156,
  [SMALL_STATE(22)] = 1178,
  [SMALL_STATE(23)] = 1200,
  [SMALL_STATE(24)] = 1222,
  [SMALL_STATE(25)] = 1244,
  [SMALL_STATE(26)] = 1266,
  [SMALL_STATE(27)] = 1288,
  [SMALL_STATE(28)] = 1310,
  [SMALL_STATE(29)] = 1330,
  [SMALL_STATE(30)] = 1352,
  [SMALL_STATE(31)] = 1374,
  [SMALL_STATE(32)] = 1396,
  [SMALL_STATE(33)] = 1416,
  [SMALL_STATE(34)] = 1438,
  [SMALL_STATE(35)] = 1452,
  [SMALL_STATE(36)] = 1474,
  [SMALL_STATE(37)] = 1496,
  [SMALL_STATE(38)] = 1518,
  [SMALL_STATE(39)] = 1540,
  [SMALL_STATE(40)] = 1554,
  [SMALL_STATE(41)] = 1576,
  [SMALL_STATE(42)] = 1589,
  [SMALL_STATE(43)] = 1602,
  [SMALL_STATE(44)] = 1615,
  [SMALL_STATE(45)] = 1628,
  [SMALL_STATE(46)] = 1641,
  [SMALL_STATE(47)] = 1654,
  [SMALL_STATE(48)] = 1667,
  [SMALL_STATE(49)] = 1686,
  [SMALL_STATE(50)] = 1699,
  [SMALL_STATE(51)] = 1718,
  [SMALL_STATE(52)] = 1731,
  [SMALL_STATE(53)] = 1750,
  [SMALL_STATE(54)] = 1769,
  [SMALL_STATE(55)] = 1782,
  [SMALL_STATE(56)] = 1795,
  [SMALL_STATE(57)] = 1808,
  [SMALL_STATE(58)] = 1821,
  [SMALL_STATE(59)] = 1834,
  [SMALL_STATE(60)] = 1847,
  [SMALL_STATE(61)] = 1860,
  [SMALL_STATE(62)] = 1879,
  [SMALL_STATE(63)] = 1892,
  [SMALL_STATE(64)] = 1911,
  [SMALL_STATE(65)] = 1924,
  [SMALL_STATE(66)] = 1937,
  [SMALL_STATE(67)] = 1956,
  [SMALL_STATE(68)] = 1969,
  [SMALL_STATE(69)] = 1982,
  [SMALL_STATE(70)] = 1995,
  [SMALL_STATE(71)] = 2008,
  [SMALL_STATE(72)] = 2027,
  [SMALL_STATE(73)] = 2040,
  [SMALL_STATE(74)] = 2052,
  [SMALL_STATE(75)] = 2064,
  [SMALL_STATE(76)] = 2076,
  [SMALL_STATE(77)] = 2088,
  [SMALL_STATE(78)] = 2100,
  [SMALL_STATE(79)] = 2112,
  [SMALL_STATE(80)] = 2124,
  [SMALL_STATE(81)] = 2136,
  [SMALL_STATE(82)] = 2148,
  [SMALL_STATE(83)] = 2160,
  [SMALL_STATE(84)] = 2172,
  [SMALL_STATE(85)] = 2184,
  [SMALL_STATE(86)] = 2196,
  [SMALL_STATE(87)] = 2208,
  [SMALL_STATE(88)] = 2220,
  [SMALL_STATE(89)] = 2232,
  [SMALL_STATE(90)] = 2244,
  [SMALL_STATE(91)] = 2256,
  [SMALL_STATE(92)] = 2278,
  [SMALL_STATE(93)] = 2290,
  [SMALL_STATE(94)] = 2302,
  [SMALL_STATE(95)] = 2314,
  [SMALL_STATE(96)] = 2336,
  [SMALL_STATE(97)] = 2348,
  [SMALL_STATE(98)] = 2360,
  [SMALL_STATE(99)] = 2372,
  [SMALL_STATE(100)] = 2384,
  [SMALL_STATE(101)] = 2396,
  [SMALL_STATE(102)] = 2408,
  [SMALL_STATE(103)] = 2420,
  [SMALL_STATE(104)] = 2432,
  [SMALL_STATE(105)] = 2444,
  [SMALL_STATE(106)] = 2456,
  [SMALL_STATE(107)] = 2468,
  [SMALL_STATE(108)] = 2480,
  [SMALL_STATE(109)] = 2492,
  [SMALL_STATE(110)] = 2504,
  [SMALL_STATE(111)] = 2516,
  [SMALL_STATE(112)] = 2529,
  [SMALL_STATE(113)] = 2540,
  [SMALL_STATE(114)] = 2553,
  [SMALL_STATE(115)] = 2570,
  [SMALL_STATE(116)] = 2587,
  [SMALL_STATE(117)] = 2600,
  [SMALL_STATE(118)] = 2611,
  [SMALL_STATE(119)] = 2621,
  [SMALL_STATE(120)] = 2629,
  [SMALL_STATE(121)] = 2645,
  [SMALL_STATE(122)] = 2653,
  [SMALL_STATE(123)] = 2661,
  [SMALL_STATE(124)] = 2677,
  [SMALL_STATE(125)] = 2687,
  [SMALL_STATE(126)] = 2697,
  [SMALL_STATE(127)] = 2713,
  [SMALL_STATE(128)] = 2721,
  [SMALL_STATE(129)] = 2729,
  [SMALL_STATE(130)] = 2737,
  [SMALL_STATE(131)] = 2745,
  [SMALL_STATE(132)] = 2761,
  [SMALL_STATE(133)] = 2769,
  [SMALL_STATE(134)] = 2785,
  [SMALL_STATE(135)] = 2801,
  [SMALL_STATE(136)] = 2809,
  [SMALL_STATE(137)] = 2825,
  [SMALL_STATE(138)] = 2838,
  [SMALL_STATE(139)] = 2851,
  [SMALL_STATE(140)] = 2864,
  [SMALL_STATE(141)] = 2877,
  [SMALL_STATE(142)] = 2890,
  [SMALL_STATE(143)] = 2903,
  [SMALL_STATE(144)] = 2916,
  [SMALL_STATE(145)] = 2929,
  [SMALL_STATE(146)] = 2939,
  [SMALL_STATE(147)] = 2949,
  [SMALL_STATE(148)] = 2957,
  [SMALL_STATE(149)] = 2967,
  [SMALL_STATE(150)] = 2977,
  [SMALL_STATE(151)] = 2987,
  [SMALL_STATE(152)] = 2995,
  [SMALL_STATE(153)] = 3005,
  [SMALL_STATE(154)] = 3015,
  [SMALL_STATE(155)] = 3025,
  [SMALL_STATE(156)] = 3035,
  [SMALL_STATE(157)] = 3045,
  [SMALL_STATE(158)] = 3053,
  [SMALL_STATE(159)] = 3058,
  [SMALL_STATE(160)] = 3065,
  [SMALL_STATE(161)] = 3070,
  [SMALL_STATE(162)] = 3075,
  [SMALL_STATE(163)] = 3080,
  [SMALL_STATE(164)] = 3085,
  [SMALL_STATE(165)] = 3092,
  [SMALL_STATE(166)] = 3099,
  [SMALL_STATE(167)] = 3104,
  [SMALL_STATE(168)] = 3111,
  [SMALL_STATE(169)] = 3115,
  [SMALL_STATE(170)] = 3119,
  [SMALL_STATE(171)] = 3123,
  [SMALL_STATE(172)] = 3127,
  [SMALL_STATE(173)] = 3131,
  [SMALL_STATE(174)] = 3135,
  [SMALL_STATE(175)] = 3139,
  [SMALL_STATE(176)] = 3143,
  [SMALL_STATE(177)] = 3147,
  [SMALL_STATE(178)] = 3151,
  [SMALL_STATE(179)] = 3155,
  [SMALL_STATE(180)] = 3159,
  [SMALL_STATE(181)] = 3163,
  [SMALL_STATE(182)] = 3167,
  [SMALL_STATE(183)] = 3171,
  [SMALL_STATE(184)] = 3175,
  [SMALL_STATE(185)] = 3179,
  [SMALL_STATE(186)] = 3183,
  [SMALL_STATE(187)] = 3187,
  [SMALL_STATE(188)] = 3191,
  [SMALL_STATE(189)] = 3195,
  [SMALL_STATE(190)] = 3199,
  [SMALL_STATE(191)] = 3203,
  [SMALL_STATE(192)] = 3207,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(91),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(136),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(138),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(137),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(32),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(95),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(120),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(139),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(141),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(118),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fragment_repeat1, 2), SHIFT_REPEAT(16),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fragment, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(131),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(117),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(112),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__private_comment, 3, .production_id = 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__private_comment, 3, .production_id = 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__public_comment, 3, .production_id = 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__public_comment, 3, .production_id = 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_function_component, 4),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_function_component, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_block, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_block, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_macro_component, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_macro_component, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_function_component, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_function_component, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_component, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_component, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_macro_component, 4),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_macro_component, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_component, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_component, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_function_component, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_function_component, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_macro_component, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_macro_component, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, .production_id = 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_function_component, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_function_component, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_block, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_block, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_component, 4),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_component, 4),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_function_component, 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_function_component, 4),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_block, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_block, 4),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subblock, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock, 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subblock, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_name, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_name, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_component_name, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_component_name, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_component_name, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_component_name, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_component_name, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_component_name, 2),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(143),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 2),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(151),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_expression_value_repeat1, 2), SHIFT_REPEAT(145),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 2),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 2), SHIFT_REPEAT(162),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 2),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_value, 1),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_repeat1, 1),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 1),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 2), SHIFT_REPEAT(166),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_value, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_value, 3),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_name, 1),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_macro_component, 4),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_macro_component, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__public_comment_repeat1, 1),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subblock_name, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [509] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
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
