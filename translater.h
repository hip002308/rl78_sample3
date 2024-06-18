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
	UCHAR ucret = switch_proc(a_in, b_in, c_in, d_in, e_in, f_in, g_in, h_in);	\
	switch (ucret & 0x0f) {	\
	case 0x01:	\
		a_out = 0x00;	\
		b_out = 0x00;	\
		c_out = 0x00;	\
		break;		\
	case 0x02:	\
		a_out = 0x01;	\
		b_out = 0x00;	\
		c_out = 0x00;	\
		break;		\
	case 0x04:	\
		a_out = 0x00;	\
		b_out = 0x01;	\
		c_out = 0x00;	\
		break;		\
	case 0x08:	\
		a_out = 0x00;	\
		b_out = 0x00;	\
		c_out = 0x01;	\
		break;		\
	default:	\
		break;		\
	}	\
}

/*******************************************************************************
Typedef definitions
*******************************************************************************/

/*******************************************************************************
Imported global variables and functions (from other files)
*******************************************************************************/

/*******************************************************************************
Exported global variables and functions (to be accessed by other files)
*******************************************************************************/
/*	Function Prototype	*/
UCHAR switch_proc( UCHAR s0, UCHAR s1, UCHAR s2, UCHAR s3, UCHAR s4, UCHAR s5, UCHAR s6, UCHAR s7 );

#endif /*_TRANSLATER_H_*/
