#ifndef _STRING_H_LEXER
#define _STRING_H_LEXER

#include"token.h"
#include"tag.h"

#include<string>

namespace lexer {
    class str : public token {
        public:
            typedef std::string string;
            typedef str         self;
            typedef self*       self_ptr;
        public:
            const string value;
        
        public:
            str(const string&value)
            :token(tag::STR),value(value)
            {}

            virtual ~str()
            {}
            
            string toString() const
            {
                return value;
            }
    };//class str
};//namespace lexer

#endif//_STRING_H_LEXER
