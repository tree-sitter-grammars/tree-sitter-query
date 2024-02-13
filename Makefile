TS ?= tree-sitter

.DEFAULT_GOAL := parser/query.so

parser/query.so: src/parser.c
	mkdir -p parser
	$(CC) -o $@ -Isrc $^ -shared -fPIC -Os

src/parser.c: grammar.js
	$(TS) generate --no-bindings

download-examples: clean
	git clone --filter=blob:none --single-branch https://github.com/nvim-treesitter/nvim-treesitter .tests/nvim-treesitter
	git clone --filter=blob:none --single-branch https://github.com/nvim-treesitter/nvim-treesitter-textobjects .tests/nvim-treesitter-textobjects

parse-examples:
	$(TS) parse -q .tests/*/queries/**/*.scm

clean:
	$(RM) -r .tests parser

.PHONY: clean download-examples parse-examples
