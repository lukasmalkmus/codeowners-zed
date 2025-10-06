; Comments
(comment) @comment
(comment_text) @comment

; Section headers
(section
  "[" @punctuation.bracket
  name: (section_name) @title
  "]" @punctuation.bracket)

; Patterns
(pattern) @string.special.path

; Wildcards
(wildcard_pattern) @operator

; Owners
(username
  "@" @punctuation.special
  name: (identifier) @function.method)

(team
  "@" @punctuation.special
  org: (identifier) @type
  "/" @punctuation.delimiter
  name: (identifier) @function.method)

(email) @string.special.url

; Identifiers
(identifier) @variable
