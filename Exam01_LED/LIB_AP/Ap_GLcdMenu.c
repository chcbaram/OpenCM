//----------------------------------------------------------------------------
//    프로그램명 	: GLcd Menu 관련 함수
//
//    만든이     	: Cho Han Cheol
//
//    날  짜     	: 
//    
//    최종 수정  	: 
//
//    MPU_Type		:
//
//    파일명     	: Ap_GLcdMenu.h
//----------------------------------------------------------------------------



//----- 헤더파일 열기
//
#define  AP_GLCDMENU_LOCAL

#include "Ap_GLcdMenu.h"

  

//-- 내부 선언
//



//-- 내부 변수
//

  

//-- 내부 함수
//
void Ap_GLcdMenu_ShowMenu(void);


  



/*---------------------------------------------------------------------------
     TITLE   : Ap_GLcdMenu_ShowMenu
     WORK    : 
     ARG     : void
     RET     : void
---------------------------------------------------------------------------*/
void Ap_GLcdMenu_ShowMenu(void)
{
	u8 key;

	Lb_printf("\n\n");
	Lb_printf("*******************************************************\n");
	Lb_printf("                      OpenCM                           \n");
	Lb_printf("*******************************************************\n");
	Lb_printf("* 1.                                                  *\n");
	Lb_printf("* 2.                                                  *\n");
	Lb_printf("* 3.                                                  *\n");
	Lb_printf("* 4.                                                  *\n");
	Lb_printf("* 5.                                                  *\n");
	Lb_printf("* 6.                                                  *\n");
	Lb_printf("* 7.                                                  *\n");
	Lb_printf("* 8.                                                  *\n");
	Lb_printf("* 9.                                                  *\n");
	Lb_printf("* m.  Menu                                            *\n");
	Lb_printf("*******************************************************\n");
	Lb_printf("\n");
}





/*---------------------------------------------------------------------------
     TITLE   : Ap_GLcdMenu_GetCmd
     WORK    : 
     ARG     : void
     RET     : 
				u8 : 눌려진 메뉴키 데이터 
---------------------------------------------------------------------------*/
u8 Ap_GLcdMenu_GetCmd(void)
{
	u8  key;
	

	Lb_printf(">> ");

    key=get_byte();
	
	Lb_printf("\n");
	
    return key;
}




/*---------------------------------------------------------------------------
     TITLE   : Ap_GLcdMenu_ExeCmd
     WORK    : 
     ARG     : void
     RET     : 
				u8 : 눌려진 메뉴키 데이터 
---------------------------------------------------------------------------*/
u8 Ap_GLcdMenu_ExeCmd(void)
{
	u8 key;
	u8 Status;
	static u8 ExeFirst = TRUE;
	u16 Ret;
	static u8  Count    = 0;	
	static s8  CircleX  = 0;	
	u8 I2C_Data[20];	
	s16 Temperature;	
	s16 x;
    s16 y;
    u16 i;

    HW_MPU6050_DATA_OBJ MPU6050_Data;


	if( ExeFirst == TRUE )
	{
		Ap_GLcdMenu_ShowMenu();		
	}

    while( (key = Ap_GLcdMenu_GetCmd()) != 0 )
    {
        switch(key)
        {
           case '1':
               	break;

           case '2':
				break;

           case '3':          						
               break; 

           case '4':
               break;  

           case '5':
               break;  

           case '6':
               break;  

           case '7':
               break;  

           case '8':
               break;

           case '9': 
               break;

           case '0':
               break;

			case 'm':
			case 'M':
				Ap_GLcdMenu_ShowMenu();
				break;
				
           default :
               break;
        }
    }
    
    return key;
}
