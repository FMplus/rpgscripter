#ifndef _NUM_H
#define _NUM_H

#include"token.h"
#include"tag.h"

#include<string>
#include<sstream>

namespace lexer {
    class num : public token {
        public:
            typedef int num_t;
            typedef num self;
            typedef self* self_ptr;
            typedef std::string string;
        public:
            const num_t value;
        public:
            num(const num_t value)
            :token(tag::NUM),value(value)
            {}
            virtual ~num()
            {}
        public:
            std::string toString() const
            {
                std::string str;
                std::stringstream ss;
                ss << value;
                ss >> str;
                return str;
            }
        private:
            
    };//class num
};//namespace lexer
#endif//_NUM_H
