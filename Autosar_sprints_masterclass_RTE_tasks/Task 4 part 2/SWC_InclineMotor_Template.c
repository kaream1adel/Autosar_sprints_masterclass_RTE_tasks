/**
 *
 * \file SWC_InclineMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_InclineMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 9-25-2023 02:50 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_InclineMotor.h"


/**
 *
 * Runnable InclineMotor_Move
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppInclineMotor_Opr_Move
 *
 */

void InclineMotor_Move (Impl_StepMotorStepType Arg_step)
{
	Std_ReturnType status;

	if(Arg_Step == MOTOR_STEP_PLUS)
    {
		/* Server Call Points */
       status = Rte_Call_rpIOSetIncline_IOSetForward();
    }
    
    else if (Arg_Step == MOTOR_STEP_MINUS)
    {
		/* Server Call Points */
       status = Rte_Call_rpIOSetIncline_IOSetReverse();
    }
	
	
	
	
}

