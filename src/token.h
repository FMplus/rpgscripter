#ifndef _TOKEN_H
#define _TOKEN_H

#include"tag.h"

#include<sstream>
#include<string>

namespace lexer {
    struct token {
    public:
        const tag_t tag;
    public:
        token(const tag_t t):tag(t)
        {}
        virtual ~token()
        {}
    public:
        virtual std::string toString() const
        {
            std::string str;
            std::stringstream ss;
            ss << tag;
            ss >> str;
            return str;
        }
    };// struct token
    // struct id : public token {
        
    // };
};//namespace lexer
#endif // _TOKEN_H
