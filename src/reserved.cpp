#include"type.h"
#include"word.h"

#include<vector>

namespace lexer{

 /*
  * TODO: release the memory at the END of the programming
  */
    word::self_ptr  and_  = new word("&&",tag::AND),
                    or_   = new word("||",tag::OR),
                    eq_   = new word("==",tag::EQ),
                    ne_   = new word("!=",tag::NE),
                    le_   = new word("<=",tag::LE),
                    ge_   = new word(">=",tag::GE),
                    inc_  = new word("++",tag::INC),
                    dec_  = new word("--",tag::DEC),
                    
                    /*
                        Maybe I won't implement these two
                     */
                    pass_ = new word("+=",tag::PASS),
                    mass_ = new word("-=",tag::MASS),

                    true_ = new word("true",tag::TRUE),
                    false_= new word("false",tag::FALSE);
};//namespace lexer

/*
 * TODO:Fix the one time leak bug
 */

namespace lexer {

 /*
  * TODO: release the memory at the END of the programming
  */
    token::self_ptr lt_   = new token('<'),
                    gt_   = new token('>'),
                    ass_  = new token('='),
                    not_  = new token('!'),
                    plus_ = new token('+'),
                    min_  = new token('-'),
                    mult_ = new token('*'),
                    div_  = new token('/');
};

namespace symbols {
    type::self_ptr int_     = new type("int",lexer::tag::BASIC),
                   real_    = new type("real",lexer::tag::BASIC),
                   string_  = new type("string",lexer::tag::BASIC),
                   bool_    = new type("bool",lexer::tag::BASIC);

};//namespace symbols