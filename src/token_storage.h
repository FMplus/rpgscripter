#ifndef _TOKEN_STORAGE
#define _TOKEN_STORAGE

#include"token.h"

#include<set>

namespace lexer{

class token_storage{
    public:
        typedef token*                  token_ptr;
        typedef token_storage           self;
        typedef self*                   self_ptr;
        typedef std::set<token_ptr>     container;
        typedef container::iterator     iterator;
    public:
        ~token_storage();
        token_storage();
    public:
        token_ptr push(token_ptr);
        void      clear();
        /*return true if it is deleted rightly */
        bool      del_ptr(token_ptr);
    private:
        //others
    private:
        container seq;
};//class token_storage
};//namespace lexer
#endif//_TOKEN_STORAGE
