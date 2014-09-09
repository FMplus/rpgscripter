#ifndef VAR_H
#define VAR_H

#include"expr.h"

namespace inter {
    class type;
};

namespace env {
    class constant;
    
    struct var : public expr {
        typedef constant*  constant_ptr;
        typedef var        self;
        typedef self*      self_ptr;
        typedef inter::type type;
        typedef type*       type_ptr;
        typedef expr::word  word;
        typedef word*       word_ptr;

        var(word_ptr n,type_ptr t) 
        : expr(n,t)
        {}
        virtual ~var()
        {}
        virtual errno_t set_value(constant_ptr) = 0;
    };//struct var
};//namespace env

#endif//VAR_H