# CODEOWNERS Extension for Zed

Full syntax highlighting and language support for GitHub CODEOWNERS files in Zed editor.

## Features

- **Syntax Highlighting**: Complete support for CODEOWNERS syntax
  - Comments (`#`)
  - Section headers (`[Section Name] @approvers`)
  - File patterns with wildcards (`*`, `**`, `?`)
  - Owner references (`@user`, `@org/team`, `email@example.com`)
- **Language Server**: Powered by [tree-sitter-codeowners](https://github.com/lukasmalkmus/tree-sitter-codeowners)
- **Auto-detection**: Automatically recognizes `CODEOWNERS` files

## Installation

1. Open Zed
2. Open the command palette (`Cmd+Shift+P` on macOS)
3. Run: **zed: extensions**
4. Search for "CODEOWNERS"
5. Click **Install**

## Usage

Once installed, the extension automatically activates for `CODEOWNERS` files. Open any CODEOWNERS file to see syntax highlighting in action.

### Example CODEOWNERS File

```codeowners
# Default owners for everything in the repo
* @org/default-team

# JavaScript/TypeScript owners
*.js @org/frontend-team
*.ts @org/frontend-team
**/*.tsx @org/ui-team

# Backend code owners
/api/ @org/backend-team
/services/ @org/backend-team @senior-dev

# Documentation section
[Documentation]
/docs/ @org/docs-team
*.md @org/tech-writers

# Configuration files
/.github/ @org/devops
*.yml @org/devops
```

## Resources

- [GitHub CODEOWNERS Documentation](https://docs.github.com/en/repositories/managing-your-repositorys-settings-and-features/customizing-your-repository/about-code-owners)
- [tree-sitter-codeowners Grammar](https://github.com/lukasmalkmus/tree-sitter-codeowners)

## Contributing

Contributions are welcome! Please open an issue or submit a pull request on [GitHub](https://github.com/lukasmalkmus/codeowners-zed).

## License

MIT License - see [LICENSE](LICENSE) for details.
