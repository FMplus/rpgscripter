#ifndef _TOKEN_REAL
#define _TOKEN_REAL

#include"token.h"
#include"tag.h"

#include<string>

namespace lexer {
class real:public token {
    public:
        typedef double real_t;
        typedef real  self;
        typedef self* self_ptr;
        typedef std::string string;
    public:
        const real_t value;
    public:
        real(const real_t value)
        :token(tag::REAL),value(value)
        {}
        virtual ~real()
        {} 
    public:
        string toString() const
        {
            string str;
            std::stringstream ss;
            ss << value;
            ss >> str;
            return str;
        }
    private:
    };//class real
};//namespace lexer

#endif//_TOKEN_REAL
