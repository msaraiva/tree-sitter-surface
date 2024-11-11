module.exports = grammar({
  name: 'surface',

  rules: {
    fragment: $ => repeat($._node),

    _node: $ => choice(
      $.tag,
      $.component,
      $.slot,
      $.text,
      $.expression,
      $.block,
      $.comment,
    ),

    tag: $ => choice(
      seq(
        $.start_tag,
        repeat($._node),
        $.end_tag
      ),
      $.self_closing_tag
    ),

    component: $ => choice(
      seq(
        $.start_component,
        repeat($._node),
        $.end_component
      ),
      $.self_closing_component,
    ),

    slot: $ => seq(
      $.start_slot,
      repeat($._node),
      $.end_slot
    ),

    block: $ => seq(
      $.start_block,
      repeat($._node),
      $.end_block
    ),

    start_tag: $ => seq(
      '<',
      $.tag_name,
      repeat(
        choice(
          $.attribute,
          $.expression,
          $.directive
        )
      ),
      '>'
    ),

    start_component: $ => seq(
      '<',
      $.component_name,
      repeat(
        choice(
          $.attribute,
          $.expression,
          $.directive
        )
      ),
      '>'
    ),

    start_slot: $ => seq(
      '<',
      $.slot_name,
      repeat(
        choice(
          $.attribute,
          $.expression,
          $.directive
        )
      ),
      '>'
    ),

    end_tag: $ => seq(
      '</',
      $._tag_or_component_name,
      '>'
    ),

    end_component: $ => seq(
      '</',
      $._tag_or_component_name,
      '>'
    ),

    end_slot: $ => seq(
      '</',
      $.slot_name,
      '>'
    ),

    self_closing_tag: $ => seq(
      '<',
      $.tag_name,
      repeat(
        choice(
          $.attribute,
          $.expression,
          $.directive
        )
      ),
      '/>'
    ),

    self_closing_component: $ => seq(
      '<',
      $.component_name,
      repeat(
        choice(
          $.attribute,
          $.expression,
          $.directive
        )
      ),
      '/>'
    ),

    expression: ($) =>
      seq(
        "{",
        prec.left(
          seq(alias(repeat($._expression_value), $.expression_value), "}")
        )
      ),

    _expression_value: ($) =>
      choice(/[^{}]+/, seq("{", optional($._expression_value), "}")),

    expression_value: ($) => $._expression_value,

    comment: $ => choice(
      $._public_comment,
      $._private_comment,
    ),

    _public_comment: $ => seq(
      '<!--',
      alias(
        choice(
          repeat1(/[^-]+|-/),
          $._public_comment
        ),
        'comment'
      ),
      '-->'
    ),

    _private_comment: $ => seq(
      '{!--',
      alias(
        choice(
          repeat1(
            /[^-]+|-/
          ),
          $._private_comment
        ),
        'comment'
      ),
      '--}'
    ),

    block: $ => seq(
      $.start_block,
      repeat(
        choice(
          $.subblock,
          $._node
        )
      ),
      $.end_block
    ),

    start_block: $ => seq(
      '{#',
      $.block_name,
      optional($.expression_value),
      '}',
    ),

    block_name: $ => choice(
      'if',
      'unless',
      'for',
      'case',
    ),

    end_block: $ => seq(
      '{/',
      $.block_name,
      '}',
    ),

    subblock: $ => seq(
      '{#',
      $.subblock_name,
      optional($.expression_value),
      '}',
    ),

    subblock_name: $ => choice(
      'else',
      'elseif',
      'match'
    ),

    attribute: $ => seq(
      $.attribute_name,
      optional(
        seq(
          '=',
          choice(
            $.quoted_attribute_value,
            $.attribute_value,
            $.expression
          )
        )
      )
    ),

    directive: $ => seq(
      $.directive_name,
      optional(
        seq(
          '=',
          choice(
            $.quoted_attribute_value,
            $.attribute_value,
            $.expression
          )
        )
      )
    ),

    quoted_attribute_value: $ => choice(
      seq(
        "'",
        optional(alias(/[^']+/, $.attribute_value)),
        "'"
      ),
      seq(
        '"',
        optional(alias(/[^"]+/, $.attribute_value)),
        '"'
      )
    ),

    attribute_value: $ => /[^<>{}"'=\s]+/,

    tag_name: $ => /[a-z]+[^\-<>{}!"'/=\s]*/,

    slot_name: $ => /:[a-z]+[^\-<>{}!"'/=\s]*/,

    component_name: ($) => /[#.A-Z][^\-<>{}!"'/=\s]*/,

    _tag_or_component_name: ($) => choice(
      $.tag_name,
      $.component_name,
    ),

    attribute_name: ($) => token(prec(-1, /[^:<>{}"'/=\s][^<>{}"'/=\s]*/)),

    directive_name: ($) => token(prec(-1, /:[^<>{}"'/=\s][^<>{}"'/=\s]*/)),

    text: $ => /[^<>{}\s]([^<>{}]*[^<>{}\s])?/,
}})
