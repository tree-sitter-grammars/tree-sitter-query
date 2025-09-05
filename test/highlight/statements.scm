(program)
; <- @punctuation.bracket
; ^ @variable
;       ^ @punctuation.bracket

";"
; <- @string

(node _ @wildcard)
;       ^ @punctuation.special
;        ^ @type

name: (identifier)
; <- @variable.member
;   ^ @punctuation.delimiter

(program
  name: (_))
;        ^ @character.special

(program
  name: _)
;       ^ @character.special

(program
  field: (identifier) @capture
  !negated-field)
; ^ @operator
;  ^ @property

(program
  (identifier)+)
;             ^ @operator

((node) [(node) "test"])
;       ^ @punctuation.bracket
;                     ^ @punctuation.bracket

((identifier) @v
  (#eq? @v "test" local))
;  ^ @punctuation.special
;   ^ @function.call
;       ^ @punctuation.special
;        ^ @type
;          ^ @string
;     ^ @punctuation.special

((comment) . (function_declaration))
;          ^ @operator

; vim:ft=query:
