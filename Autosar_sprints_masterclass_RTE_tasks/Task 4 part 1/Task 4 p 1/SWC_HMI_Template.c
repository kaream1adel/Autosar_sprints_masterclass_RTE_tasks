/**
 *
 * \file SWC_HMI_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_HMI
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 9-15-2023 06:40 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_HMI.h"


/**
 *
 * Runnable HMI_MainFunction
 *
 * Triggered By:
 *  - TimingEventImpl.TE_HMI_MainFunction_100ms
 *
 */

void HMI_MainFunction (void)
{
	Std_ReturnType status;
	MultiStateBtnType DE_HeightBtnState;
	MultiStateBtnType DE_InclineBtnState;
	MultiStateBtnType DE_SlideBtnState;
	uint8 DE_Height;
	uint8 DE_Incline;
	uint8 DE_Slide;

	/* Data Send Points */
	status = Rte_Write_ppSeatCtrlBtns_DE_HeightBtnState(DE_HeightBtnState);
	status = Rte_Write_ppSeatCtrlBtns_DE_InclineBtnState(DE_InclineBtnState);
	status = Rte_Write_ppSeatCtrlBtns_DE_SlideBtnState(DE_SlideBtnState);
	
	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlData_DE_Height(&DE_Height);
	status = Rte_Read_rpSeatCtrlData_DE_Incline(&DE_Incline);
	status = Rte_Read_rpSeatCtrlData_DE_Slide(&DE_Slide);

	//Logic
	
	if(DE_Height == 0 || DE_Height == TIME_OUT || DE_Height == NOT_UPDATED)
    {
        DE_HeightBtnState = MULTI_STATE_BTN_INIT;
    }
    
    else if(DE_Height == 1)
    {
        DE_HeightBtnState = MULTI_STATE_BTN_MINUS;
    }
    
    else if (DE_Height == 2)
    {
        DE_HeightBtnState = MULTI_STATE_BTN_PLUS;
    }
    
    if(DE_Incline == 0 || DE_Incline == TIME_OUT || DE_Incline == NOT_UPDATED)
    {
        DE_InclineBtnState = MULTI_STATE_BTN_INIT;
    }
    
    else if(DE_Incline == 1)
    {
        DE_InclineBtnState = MULTI_STATE_BTN_MINUS;
    }
    
    else if (DE_Incline == 2)
    {
        DE_InclineBtnState = MULTI_STATE_BTN_PLUS;
    }
    
    if(DE_Slide == 0 || DE_Slide == TIME_OUT || DE_Slide == NOT_UPDATED)
    {
        DE_SlideBtnState = MULTI_STATE_BTN_INIT;
    }
    
    else if(DE_Slide == 1)
    {
        DE_SlideBtnState = MULTI_STATE_BTN_MINUS;
    }
    
    else if (DE_Slide == 2)
    {
        DE_SlideBtnState = MULTI_STATE_BTN_PLUS;
    }
	
}

