/*
 * Quaklang Lexer - Token Definitions (Stage 0)
 *
 * This header defines all token types used by the C implementation of
 * Quaklang's lexer. These files are temporary for Stage 0 runs while
 * I implement the core components of the compiler. In later stages,
 * the lexer and parser will be written directly in quaklang itself (Stage 1).
 *
 * Project start date : 20 Sep 2025
 * Current version    : b0.1
 *
 * Notes:
 *  - Keywords, operators, and symbols are grouped logically for readability.
 *  - TOKEN_EOF marks the end of the input stream.
 *  - TOKEN_UNKNOWN represents any unrecognized character or sequence.
 *
 * See also:
 *  - lexer.c : The implementation of the tokenization logic.
 *  - parser.c : The implementation of token processing and AST logic.
 */


#ifndef QUAK_TOKENS_H
#define QUAK_TOKENS_H

enum TokenType {
    
    // Keywords
    TOKEN_INT,
    TOKEN_FLOAT,
    TOKEN_BOOL,
    TOKEN_VEC,
    TOKEN_BOX,
    TOKEN_EXISTS,
    TOKEN_U_BLOCK,
    TOKEN_FOR,
    TOKEN_IF,
    TOKEN_ELSE,
    TOKEN_WHILE,
    TOKEN_PRINT,
    TOKEN_INP,
    TOKEN_ALLOC,
    TOKEN_FREE,
    TOKEN_MAIN,

    // Boolean Literals
    TOKEN_FALSE,
    TOKEN_TRUE,

    // Operators
    TOKEN_ASSIGN,         // =
    TOKEN_COLON,          // :
    TOKEN_SEMICOLON,      // ;
    TOKEN_DOT,            // .
    TOKEN_PIPE,           // |
    TOKEN_RANGE_EQUALS,   // =]
    TOKEN_RANGE_EXCLUDING_EQUALS,  // =)
    TOKEN_INFINITE_RANGE, // [=
    TOKEN_RANGE_BOUNDED_INCLUSIVE,  // [=]
    TOKEN_RANGE_BOUNDED_EXCLUSIVE,  // [=)

    TOKEN_PLUS,           // +
    TOKEN_MINUS,          // -
    TOKEN_STAR,           // *
    TOKEN_SLASH,          // /
    TOKEN_MOD,            // %

    TOKEN_EQEQ,           // ==
    TOKEN_NEQ,            // !=
    TOKEN_LT,             // <
    TOKEN_GT,             // >
    TOKEN_LTE,            // <=
    TOKEN_GTE,            // >=

    // Brackets
    TOKEN_LPAREN,         // (
    TOKEN_RPAREN,         // )
    TOKEN_LBRACE,         // {
    TOKEN_RBRACE,         // }
    TOKEN_LBRACKET,       // [
    TOKEN_RBRACKET,       // ]

    // Literals
    TOKEN_NUMBER,         // 42, 3.14
    TOKEN_STRING,         // "Hello World"

    // Identifiers
    TOKEN_IDENTIFIER,

    // Special
    TOKEN_EOF,            // End of file
    TOKEN_UNKNOWN         // Unrecognized token
};

#endif
