#ifndef _TYPE_H
#define _TYPE_H

#include"word.h"
#include"tag.h"

#include<string>

namespace symbols{
    class type : public lexer::word {
        public:
            typedef std::string string;
            typedef type self;
            typedef self* self_ptr;
        public:
            //const int width;
        public:
            type(const string&s,const lexer::tag_t tag)
            :lexer::word(s,tag)
            {}
            virtual ~type()
            {}
        public:
            string toString() const 
            {
                /*
                 * Because the name of the type is set in the words' lexme
                 */
                return lexer::word::toString();
            }
        private:
            //
    };//class type

    extern type::self_ptr int_,real_,string_,bool_;
};//namespace symbols
#endif // _TYPE_H
