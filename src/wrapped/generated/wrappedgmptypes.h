/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.5.0.24) *
 *******************************************************************/
#ifndef __wrappedgmpTYPES_H_
#define __wrappedgmpTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFppp_t)(void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(__gmp_get_memory_functions, vFppp_t) \
	GO(__gmp_set_memory_functions, vFppp_t)

#endif // __wrappedgmpTYPES_H_
