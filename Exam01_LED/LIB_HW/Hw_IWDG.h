//----------------------------------------------------------------------------
//    프로그램명 	: IWDG 관련 헤더
//
//    만든이     	: Cho Han Cheol(Baram)
//
//    날  짜     	:
//    
//    최종 수정  	:
//
//    MPU_Type	:
//
//    파일명     	: Hw_IWDG.h
//----------------------------------------------------------------------------
                                                                                                 
#ifndef __HW_IWDG_H__
#define __HW_IWDG_H__


#ifdef   HW_IWDG_LOCAL
#define  EXT_HW_IWDG_DEF
#else
#define  EXT_HW_IWDG_DEF     extern
#endif



#include "Hw.h"





EXT_HW_IWDG_DEF void Hw_IWDG_Init( void );

EXT_HW_IWDG_DEF void Hw_IWDG_GoToBoot( void );


#endif
