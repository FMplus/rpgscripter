#ifndef _TOKEN_H
#define _TOKEN_H

#include"tag.h"

#include<sstream>
#include<string>

namespace lexer {
    struct token {
    public:
        typedef std::string string;
        typedef token self;
        typedef self* self_ptr;
    public:
        const tag_t tag;
    public:
        token(const tag_t t):tag(t)
        {}
        virtual ~token()
        {}
    public:
        virtual string toString() const
        {
            string str;
            std::stringstream ss;
            ss << tag;
            ss >> str;
            return str;
        }
    };// struct token
    
    extern token::self_ptr  lt_   ,gt_    ,ass_ ,
                            not_  ,plus_  ,min_ ,
                            mult_ ,div_   ;
};//namespace lexer
#endif // _TOKEN_H
