/*******************************************************************************
* File Name    : translater.c
* Description  : This file implements main function.
* Creation Date: 2024/06/17
*******************************************************************************/


/*******************************************************************************
Includes <System Includes> , "Project Includes"
*******************************************************************************/
#include "sfr.h"
#include "common.h"
#include "config.h"
#include "translater.h"

/*******************************************************************************
Macro definitions
*******************************************************************************/

/*******************************************************************************
Typedef definitions
*******************************************************************************/

/*******************************************************************************
Imported global variables and functions (from other files)
*******************************************************************************/

/*******************************************************************************
Exported global variables and functions (to be accessed by other files)
*******************************************************************************/
UCHAR switch_proc( UCHAR s0, UCHAR s1, UCHAR s2, UCHAR s3, UCHAR s4, UCHAR s5, 
		UCHAR s6, UCHAR s7 )
{
	UCHAR sw = 0x00;
	sw += (~s3 | ~s7) & 0x01;
	sw <<= 1;
	sw += (~s2 | ~s6) & 0x01;
	sw <<= 1;
	sw += (~s1 | ~s5) & 0x01;
	sw <<= 1;
	sw += (~s0 | ~s4) & 0x01;
	return sw;
}

/*******************************************************************************
Private variables and functions
*******************************************************************************/

