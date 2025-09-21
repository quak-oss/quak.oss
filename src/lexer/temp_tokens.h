#ifndef QUAK_TOKENS_H
#define QUAK_TOKENS_H

enum TokenType {
    
    // Keywords
    TOKEN_INT,
    TOKEN_FLOAT,
    TOKEN_VEC,
    TOKEN_BOX,
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
    TOKEN_BOOL,           // true or false

    // Identifiers
    TOKEN_IDENTIFIER,

    // Special
    TOKEN_EOF,            // End of file
    TOKEN_UNKNOWN         // Unrecognized token
};

#endif
