/**
 *
 * \file SWC_WeightSensor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_WeightSensor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 9-25-2023 03:08 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_WeightSensor.h"


/**
 *
 * Runnable WeightSensor_GetWeight
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppWeightSensor_Opr_GetWeight
 *
 */

void WeightSensor_GetWeight (Impl_SensorWeightType* Arg_weight)
{
	Std_ReturnType status;
	Impl_IOWeightSensorReadingType Arg_weight;

	/* Server Call Points */
	status = Rte_Call_rpIOGetWeight_IOGet(&Arg_weight);
	(* Arg_Weight) = (SensorWeightType)((* Arg_Weight)/1000);
	
}

