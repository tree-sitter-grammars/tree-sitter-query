download-examples:
	git clone --depth=1 https://github.com/nvim-treesitter/nvim-treesitter .tests/nvim-treesitter
	git clone --depth=1 https://github.com/nvim-treesitter/nvim-treesitter-textobjects .tests/nvim-treesitter-textobjects
	# `tree-sitter parse` uses the extension of the file to detect the parser to be used.
	rename .scm .query .tests/*/queries/**/*.scm

parse-examples:
	tree-sitter parse -q .tests/*/queries/**/*.query

clean:
	rm -rf .tests

.PHONY: clean download-examples parse-examples
