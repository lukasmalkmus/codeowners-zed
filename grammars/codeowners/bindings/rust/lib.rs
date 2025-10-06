//! This crate provides CODEOWNERS language support for the [tree-sitter][] parsing library.
//!
//! [tree-sitter]: https://github.com/tree-sitter/tree-sitter

use tree_sitter_language::LanguageFn;

extern "C" {
    fn tree_sitter_codeowners() -> *const ();
}

/// Returns the tree-sitter [LanguageFn] for this grammar.
pub const LANGUAGE: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_codeowners) };

#[cfg(test)]
mod tests {
    #[test]
    fn test_can_load_grammar() {
        let mut parser = tree_sitter::Parser::new();
        parser
            .set_language(&super::LANGUAGE.into())
            .expect("Error loading CODEOWNERS grammar");
    }
}
