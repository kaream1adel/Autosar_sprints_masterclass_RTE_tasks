/**
 *
 * \file SWC_SeatManager_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_SeatManager
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 9-15-2023 06:40 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_SeatManager.h"


/**
 *
 * Runnable SeatManager_SetHeight
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_DE_HeightBtnState
 *
 */

void SeatManager_SetHeight (void)
{
	Std_ReturnType status;
	MultiStateBtnType DE_HeightBtnState;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_DE_HeightBtnState(&DE_HeightBtnState);

	if(DE_HeightBtnState == MULTI_STATE_BTN_MINUS)
    {
        Rte_Call_rpHeightMotor_Move(MOTOR_STEP_MINUS);
    }
    
    else if (DE_HeightBtnState == MULTI_STATE_BTN_PLUS)
    {
        Rte_Call_rpHeightMotor_Move(MOTOR_STEP_PLUS);
    }

	
}


/**
 *
 * Runnable SeatManager_SetIncline
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_DE_InclineBtnState
 *
 */

void SeatManager_SetIncline (void)
{
	Std_ReturnType status;
	MultiStateBtnType DE_InclineBtnState;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_DE_InclineBtnState(&DE_InclineBtnState);

	if(DE_InclineBtnState == MULTI_STATE_BTN_MINUS)
    {
        Rte_Call_rpInclineMotor_Move(MOTOR_STEP_MINUS);
    }
    
    else if (DE_InclineBtnState == MULTI_STATE_BTN_PLUS)
    {
        Rte_Call_rpInclineMotor_Move(MOTOR_STEP_PLUS);
    }
	
}


/**
 *
 * Runnable SeatManager_SetSlide
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_DE_SlideBtnState
 *
 */

void SeatManager_SetSlide (void)
{
	Std_ReturnType status;
	MultiStateBtnType DE_SlideBtnState;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_DE_SlideBtnState(&DE_SlideBtnState);

	if(DE_SlideBtnState == MULTI_STATE_BTN_MINUS)
    {
        Rte_Call_rpSlideMotor_Move(MOTOR_STEP_MINUS);
    }
    
    else if (DE_SlideBtnState == MULTI_STATE_BTN_PLUS)
    {
        Rte_Call_rpSlideMotor_Move(MOTOR_STEP_PLUS);
    }
	
}

