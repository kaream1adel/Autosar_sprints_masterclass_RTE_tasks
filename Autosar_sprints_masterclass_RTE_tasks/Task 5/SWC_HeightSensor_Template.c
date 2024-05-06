/**
 *
 * \file SWC_HeightSensor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_HeightSensor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 9-25-2023 03:07 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_HeightSensor.h"


/**
 *
 * Runnable HeightSensor_GetPosition
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppHeightSensor_Opr_GetPosition
 *
 */

void HeightSensor_GetPosition (Impl_SensorPositionType* Arg_position)
{
	Std_ReturnType status;
	Impl_IOPositionSensorReadingType Arg_position;

	/* Server Call Points */
	status = Rte_Call_rpIOGetHeight_IOGet(&Arg_position);
	 if(Arg_Position == 0)
    {
        Arg_Position = SENSOR_POSITION_STEP_0;
    }
    else if(Arg_Position > 0 && Arg_Position < 64)
    {
        Arg_Position = SENSOR_POSITION_STEP_1;
    }
    else if(Arg_Position > 64 && Arg_Position < 192)
    {
        Arg_Position = SENSOR_POSITION_STEP_2;
    }
    else 
    {
        Arg_Position = SENSOR_POSITION_STEP_3;
    }
	
}

