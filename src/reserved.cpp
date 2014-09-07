#include"type.h"
#include"word.h"

namespace lexer{
    word::self_ptr  and_  = new word("&&",tag::AND),
                    or_   = new word("||",tag::OR),
                    eq_   = new word("==",tag::EQ),
                    ne_   = new word("!=",tag::NE),
                    le_   = new word("<=",tag::LE),
                    ge_   = new word(">=",tag::GE),
                    inc_  = new word("++",tag::INC),
                    dec_  = new word("--",tag::DEC),
                    pass  = new word("+=",tag::PASS),/*May not be completed*/
                    mass  = new word("-=",tag::MASS),/*May not be completed*/
                    true_ = new word("true",tag::TRUE),
                    false_= new word("false",tag::FALSE);
};//namespace lexer

namespace symbols {
    type::self_ptr int_     = new type("int",lexer::tag::BASIC),
                   real_    = new type("real",lexer::tag::BASIC),
                   string_  = new type("string",lexer::tag::BASIC),
                   bool_    = new type("bool",lexer::tag::BASIC);

};//namespace symbols
