#include "tree_sitter/parser.h"

#include <stdint.h>
#include <wctype.h>

enum TokenType {
    PREDICATE_NAME,
    ERROR_SENTINEL,
};

void *tree_sitter_query_external_scanner_create() {
    return NULL;
}

void tree_sitter_query_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_query_external_scanner_serialize(void *payload,
                                                      char *buffer) {
    return 0;
}

void tree_sitter_query_external_scanner_deserialize(void *payload,
                                                    const char *buffer,
                                                    unsigned length) {}

bool tree_sitter_query_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
    if (valid_symbols[ERROR_SENTINEL]) {
        return false;
    }

    if (!valid_symbols[PREDICATE_NAME]) {
        return false;
    }

    // Immediate token: ignore whitespace
    while (iswspace(lexer->lookahead)) {
        lexer->advance(lexer, true);
    }

    // Identifiers cannot start with `.`, `?`, or `!`
    if (lexer->lookahead == '.' || lexer->lookahead == '?' ||
        lexer->lookahead == '!') {
        return false;
    }

    bool has_content = false;
    int32_t last_char = 0;
    for (;;) {
        if (iswalnum(lexer->lookahead) || lexer->lookahead == '_' ||
            lexer->lookahead == '-' || lexer->lookahead == '.') {

            has_content = true;

            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
        } else if (lexer->lookahead == '?' || lexer->lookahead == '!') {
            if (last_char == '?' || last_char == '!') {
                has_content = true;
            }
            last_char = lexer->lookahead;
            lexer->mark_end(lexer);
            lexer->advance(lexer, false);
        } else {
            break;
        }
    }

    if (has_content) {
        lexer->result_symbol = PREDICATE_NAME;
    }

    return has_content;
}
