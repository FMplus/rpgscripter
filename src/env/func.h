#ifndef FUNC_H
#define FUNC_H

namespace env {
    class func {
    public:
        typedef  inter::constant res_t;
        typedef  res_t*          res_ptr;
        typedef  inter::id       ref_t;
        typedef  ref_t           ref_ptr;
        typedef  symbols::env    env_t;
        typedef  env_t*          env_ptr;
        //typedef  symbols::env    
    public:
        
        //
        //para_meter
    public:
        bool set_env(env_ptr e)
        {
            
        }
    
        env_ptr get_env()
        {
            
        }
    
        virtual res_t run() 
        {
            
        }
    private:
        
    private:
    };//class func
};//namespace env

#endif//FUNC_H