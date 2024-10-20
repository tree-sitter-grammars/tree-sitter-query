package tree_sitter_query_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_query "github.com/tree-sitter-grammars/tree-sitter-query/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_query.Language())
	if language == nil {
		t.Errorf("Error loading Query grammar")
	}
}
