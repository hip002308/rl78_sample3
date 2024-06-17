/*******************************************************************************
* File Name    : translater.h
* Description  : This file implements main function.
* Creation Date: 2024/06/17
*******************************************************************************/

#ifndef _TRANSLATER_H_
#define _TRANSLATER_H_
/*******************************************************************************
Exported global variables and functions (to be accessed by other files)
*******************************************************************************/
/*	Function Prototype	*/
// void	panel_init0( void );
// void	panel( void );

/*******************************************************************************
Includes <System Includes> , "Project Includes"
*******************************************************************************/

#define INPUT_TRANSLATE(a_in, b_in, c_in, d_in, e_in, f_in, g_in, h_in, 	\
				a_out, b_out, c_out)				\
{							\
	UCHAR ucret = 0x00, aaa;				\
	aaa += (~I_07 | ~I_15) & 0x01;			\
	aaa <<= 1;					\
	aaa += (~I_09 | ~I_17) & 0x01;			\
	aaa <<= 1;					\
	aaa += (~I_11 | ~I_19) & 0x01;			\
	aaa <<= 1;					\
	aaa += (~I_13 | ~I_21) & 0x01;			\
}

//#include "digitalio.h"
#endif /*_TRANSLATER_H_*/
