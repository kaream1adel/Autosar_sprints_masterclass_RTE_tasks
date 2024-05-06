/**
 *
 * \file SWC_InclineMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_InclineMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 9-15-2023 09:34 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_InclineMotor.h"


/**
 *
 * Runnable RE_InclineMotor_Step
 *
 * Triggered By:
 *
 */

void RE_InclineMotor_Step (void)
{
	Std_ReturnType status;
	if(Arg_Step == MOTOR_STEP_PLUS)
    {
        Dio_WriteChannel();
    }
    
    else if (Arg_Step == MOTOR_STEP_MINUS)
    {
        Dio_WriteChannel();
    }

}

