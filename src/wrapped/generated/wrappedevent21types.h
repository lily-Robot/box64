/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.5.0.24) *
 *******************************************************************/
#ifndef __wrappedevent21TYPES_H_
#define __wrappedevent21TYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFpiwpp_t)(void*, int32_t, int16_t, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(event_set, vFpiwpp_t)

#endif // __wrappedevent21TYPES_H_
