#ifndef __WORD_H
#define __WORD_H
#include<string>

#include"token.h"
#include"tag.h"

#include<string>

namespace lexer {
    class word : public token {
        public:
            typedef word    self;
            typedef self*   self_ptr;
            typedef std::string string;
        public:
            word(const std::string&lexme,const int tag)
            :token(tag),lexme(lexme)
            {}
            
            virtual ~word()
            {}
        public:
            string toString() const
            {
                return this -> lexme;
            }

        public:
            std::string lexme;
    };//class word

extern word::self_ptr and_  ,or_    ,eq_   ,ne_   ,
                      le_   ,ge_    ,inc_  ,dec_  ,
                      true_ ,false_ ,pass_ ,mass_;
};//namespace std

#endif//__WORD_H
