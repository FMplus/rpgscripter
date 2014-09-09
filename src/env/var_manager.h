#ifndef VAR_MANAGER_H
#define VAR_MANAGER_H

#include"var.h"

#include<map>

namespace env {
    class var_manager {
    public:
    typedef var*                var_ptr;
    typedef var::word_ptr       word_ptr;
    typedef std::map<word_ptr,var_ptr> var_container_t;
    public:
    bool    add_var(word_ptr,var_ptr);
    bool    remove_var(word_ptr);
    errno_t set_var(word_ptr,var_ptr);
    var_ptr get_var(word_ptr,var_ptr);
    bool    test_exist( word_ptr ) const;
    private:
    var_container_t vc;
    };//class var_manager
};//namespace env

#endif//VAR_MANAGER_H