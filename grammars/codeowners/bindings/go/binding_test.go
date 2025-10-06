package tree_sitter_codeowners_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/lukasmalkmus/tree-sitter-codeowners"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_codeowners.Language())
	if language == nil {
		t.Errorf("Error loading Codeowners grammar")
	}
}
