#include"token_storage.h"

namespace lexer{
    token_storage::~token_storage()
    {
        this -> clear();
    }

    token_storage::token_storage()
    {}

    token_storage::token_ptr token_storage::push(token_ptr tpr)
    {
        seq.insert(tpr);
        return tpr;
    }

    bool token_storage::del_ptr(token_ptr tpr)
    {
        if(seq.erase(tpr) > 0){
            delete tpr;
            return true;
        } else {
            return false;
        }
    }

    void token_storage::clear()
    {
        for(iterator iter = seq.begin();
            iter != seq.end();
            iter++){
            delete (*iter);
            //*iter = NULL;
        }
        seq.clear();
    }
};//namespace lexer
