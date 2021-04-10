#!/usr/bin/env bash

git clone --depth=1 https://github.com/nvim-treesitter/nvim-treesitter .tests/nvim-treesitter
git clone --depth=1 https://github.com/nvim-treesitter/nvim-treesitter-textobjects .tests/nvim-treesitter-textobjects
# `tree-sitter parse` uses the extension of the file to detect the parser to be used.
for f in .tests/*/queries/**/*.scm; do
  mv "$f" "${f%.scm}.query";
done
