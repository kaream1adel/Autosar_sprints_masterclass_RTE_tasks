/**
 *
 * \file SWC_InclineSensor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_InclineSensor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 9-16-2023 08:11 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_InclineSensor.h"


/**
 *
 * Runnable InclineSensor_GetPosition
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppInclineSensor_Opr_GetPosition
 *
 */

void InclineSensor_GetPosition (Impl_SensorPositionType* Arg_position)
{
	Std_ReturnType status;
	 Adc_ReadGroup(Group, Arg_Position);
}

