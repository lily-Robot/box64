/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.5.0.24) *
 *******************************************************************/
#ifndef __wrappedsdl1imageTYPES_H_
#define __wrappedsdl1imageTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void* (*pFp_t)(void*);
typedef void* (*pFpi_t)(void*, int32_t);
typedef void* (*pFpip_t)(void*, int32_t, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(IMG_LoadBMP_RW, pFp_t) \
	GO(IMG_LoadCUR_RW, pFp_t) \
	GO(IMG_LoadGIF_RW, pFp_t) \
	GO(IMG_LoadICO_RW, pFp_t) \
	GO(IMG_LoadJPG_RW, pFp_t) \
	GO(IMG_LoadLBM_RW, pFp_t) \
	GO(IMG_LoadPCX_RW, pFp_t) \
	GO(IMG_LoadPNG_RW, pFp_t) \
	GO(IMG_LoadPNM_RW, pFp_t) \
	GO(IMG_LoadTGA_RW, pFp_t) \
	GO(IMG_LoadTIF_RW, pFp_t) \
	GO(IMG_LoadWEBP_RW, pFp_t) \
	GO(IMG_LoadXCF_RW, pFp_t) \
	GO(IMG_LoadXPM_RW, pFp_t) \
	GO(IMG_LoadXV_RW, pFp_t) \
	GO(IMG_Load_RW, pFpi_t) \
	GO(IMG_LoadTyped_RW, pFpip_t)

#endif // __wrappedsdl1imageTYPES_H_
