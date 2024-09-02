/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.5.0.24) *
 *******************************************************************/
#ifndef __wrappedlibrtTYPES_H_
#define __wrappedlibrtTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFp_t)(void*);
typedef int32_t (*iFip_t)(int32_t, void*);
typedef int32_t (*iFupp_t)(uint32_t, void*, void*);
typedef int32_t (*iFipip_t)(int32_t, void*, int32_t, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(aio_read, iFp_t) \
	GO(aio_read64, iFp_t) \
	GO(aio_write, iFp_t) \
	GO(aio_write64, iFp_t) \
	GO(aio_cancel, iFip_t) \
	GO(timer_create, iFupp_t) \
	GO(lio_listio, iFipip_t)

#endif // __wrappedlibrtTYPES_H_
