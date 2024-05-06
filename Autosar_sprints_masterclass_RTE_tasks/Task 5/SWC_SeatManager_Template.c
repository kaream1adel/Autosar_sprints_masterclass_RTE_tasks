/**
 *
 * \file SWC_SeatManager_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_SeatManager
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 9-25-2023 06:04 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_SeatManager.h"


/**
 *
 * Runnable SeatManager_AutoHeight
 *
 * Triggered By:
 *  - TimingEventImpl.TE_SeatManager_AutoHeight_200ms
 *
 */

void SeatManager_AutoHeight (void)
{
	Std_ReturnType status;
	Impl_StepMotorStepType Arg_step;
	Impl_SensorPositionType Arg_position;
	Impl_SensorWeightType Arg_weight;

	/* Server Call Points */
	status = Rte_Call_rpHeightMotor_Opr_Move(Arg_step);
	status = Rte_Call_rpHeightSensor_Opr_GetPosition(&Arg_position);
	status = Rte_Call_rpWeightSensor_Opr_GetWeight(&Arg_weight);
	
}


/**
 *
 * Runnable SeatManager_AutoIncline
 *
 * Triggered By:
 *  - TimingEventImpl.TE_SeatManager_AutoIncline_200ms
 *
 */

void SeatManager_AutoIncline (void)
{
	Std_ReturnType status;
	Impl_StepMotorStepType Arg_step;
	Impl_SensorPositionType Arg_position;
	Impl_SensorWeightType Arg_weight;

	/* Server Call Points */
	status = Rte_Call_rpInclineMotor_Opr_Move(Arg_step);
	status = Rte_Call_rpInclineSensor_Opr_GetPosition(&Arg_position);
	status = Rte_Call_rpWeightSensor_Opr_GetWeight(&Arg_weight);
	
}


/**
 *
 * Runnable SeatManager_AutoSlide
 *
 * Triggered By:
 *  - TimingEventImpl.TE_SeatManager_AutoSlide_200ms
 *
 */

void SeatManager_AutoSlide (void)
{
	Std_ReturnType status;
	Impl_StepMotorStepType Arg_step;
	Impl_SensorPositionType Arg_position;
	Impl_SensorWeightType Arg_weight;

	/* Server Call Points */
	status = Rte_Call_rpSlideMotor_Opr_Move(Arg_step);
	status = Rte_Call_rpSlideSensor_Opr_GetPosition(&Arg_position);
	status = Rte_Call_rpWeightSensor_Opr_GetWeight(&Arg_weight);
	
}


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
	Impl_StepMotorStepType Arg_step;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_DE_HeightBtnState(&DE_HeightBtnState);
	
	/* Server Call Points */
	status = Rte_Call_rpHeightMotor_Opr_Move(Arg_step);
	
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
	Impl_StepMotorStepType Arg_step;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_DE_InclineBtnState(&DE_InclineBtnState);
	
	/* Server Call Points */
	status = Rte_Call_rpSlideMotor_Opr_Move(Arg_step);
	
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
	Impl_StepMotorStepType Arg_step;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_DE_SlideBtnState(&DE_SlideBtnState);
	
	/* Server Call Points */
	status = Rte_Call_rpInclineMotor_Opr_Move(Arg_step);
	
}

