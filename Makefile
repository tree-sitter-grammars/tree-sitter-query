download-examples: clean
	./scripts/download-examples.sh

parse-examples:
	tree-sitter parse -q .tests/*/queries/**/*.query

clean:
	rm -rf .tests

.PHONY: clean download-examples parse-examples
