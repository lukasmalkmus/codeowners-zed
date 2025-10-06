# tree-sitter-codeowners

Tree-sitter grammar for GitHub CODEOWNERS files.

## Features

- Syntax parsing for CODEOWNERS file patterns
- Support for comments
- Section headers with optional approvers
- File patterns (wildcards, globs, directories)
- Owner formats (usernames, teams, emails)

## Usage

### With tree-sitter CLI

```bash
npm install
npm start  # Opens playground
```

### With Zed

This grammar is used by the [codeowners-zed](https://github.com/lukasmalkmus/codeowners-zed) extension.

## Development

Build the parser:

```bash
tree-sitter generate
tree-sitter build
```

Run tests:

```bash
tree-sitter test
```

## License

MIT
