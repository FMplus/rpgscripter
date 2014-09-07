#ifndef _TAG_H
#define _TAG_H

namespace lexer {
    typedef int tag_t;
    namespace tag {
        /*
         * Basic Token
         */
        const tag_t BASIC = 256,ID    = 257,
                    INDEX = 258,MINUS = 259,
                    OR    = 260,AND   = 261,
                    EQ    = 262,NE    = 263,
                    GE    = 264,LE    = 265,
                    TRUE  = 266,FALSE = 267,
                    INC   = 268,DEC   = 269,
                    PASS  = 270,MASS  = 271;
        
        /*
         * Stream Control Token
         */
        const tag_t WHILE = 272,FOR   = 273,
                    BREAK = 274,RETURN= 275,
                    ELSE  = 276,DO    = 277,
                    IF    = 278;
        
        /*
         * Basic Type Token
         */
        const tag_t NUM   =  279,REAL = 280, 
                    BOOL  =  281,STR  = 282;
        
        /*
         * Keywords Etc
         */
        const tag_t STAGE = 283,VAR = 284,
                    MAP   = 285,
                    GLOBAL = 286,LOCAL = 287;
                    

    };//namespace tag
};//namespace lexer

#endif//_TAG_H