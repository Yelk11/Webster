#ifndef TOKEN_H
#define TOKEN_H


typedef enum token_type{
    LPAREN,
    RPAREN
}TOKEN;


struct token_s{
    enum token_type type;
    char* value;
}token_t;

#endif