#ifndef _NODE_H
#define _NODE_H

#include"lexer.h"

#include<string>

namespace inter{
    /*
     * The parse tree node
     */
    class node {
    public:
        typedef std::string string;
    private:
        /*
         * For the error information
         */
        int lexline;
    public:
        node()
        :lexline(lexer::lexer::lineno)
        {}

    public:
        /*
         * Parse the tree
         */
        virtual void run() = 0;
    };//class node
};//namespace symbols

#endif//_NODE_H
