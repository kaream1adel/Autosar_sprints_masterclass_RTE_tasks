/**
 *
 * \file SWC_IohwAbs_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_IohwAbs
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 9-25-2023 03:20 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_IohwAbs.h"
static Adc_ValueGroupType IoHwAbs_PositionSensorReadings[ADC_GR0_NUM_CHANNELS]= {0};


/**
 *
 * Runnable IoHwAbs_ECUGet_Height
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppIOGetHeight_IOGet
 *
 */

void IoHwAbs_ECUGet_Height (Impl_IOPositionSensorReadingType* Arg_position)
{
	Std_ReturnType status;
	 status = Adc_ReadGroup(AdcConf_AdcGroup_PositionSensorGrp, IoHwAbs_PositionSensorReadings);
    
    if(status == E_OK)
    {
        Arg_Position = (IoPositionSensorReadingTypes) IoHwAbs_PositionSensorReadings[0];
    }

}


/**
 *
 * Runnable IoHwAbs_ECUGet_Incline
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppIOGetIncline_IOGet
 *
 */

void IoHwAbs_ECUGet_Incline (Impl_IOPositionSensorReadingType* Arg_position)
{
	Std_ReturnType status;
	 status = Adc_ReadGroup(AdcConf_AdcGroup_PositionSensorGrp, IoHwAbs_PositionSensorReadings);
    
    if(status == E_OK)
    {
        Arg_Position = (IoPositionSensorReadingTypes) IoHwAbs_PositionSensorReadings[0];
    }

}


/**
 *
 * Runnable IoHwAbs_ECUGet_Slide
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppIOGetSlide_IOGet
 *
 */

void IoHwAbs_ECUGet_Slide (Impl_IOPositionSensorReadingType* Arg_position)
{
	Std_ReturnType status;
	 status = Adc_ReadGroup(AdcConf_AdcGroup_PositionSensorGrp, IoHwAbs_PositionSensorReadings);
    
    if(status == E_OK)
    {
        Arg_Position = (IoPositionSensorReadingTypes) IoHwAbs_PositionSensorReadings[0];
    }

}


/**
 *
 * Runnable IoHwAbs_ECUGet_Weight
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppIOGetWeight_IOGet
 *
 */

void IoHwAbs_ECUGet_Weight (Impl_IOWeightSensorReadingType* Arg_weight)
{
	Std_ReturnType status;
	Spi_DataType SpiData;
    
    status = Spi_ReadIB(SpiConf_SpiChannel_WeightSensor, &SpiData);
    if(status == E_OK)
    {
        Arg_Weight = (IoWeightSensorReadingTypes) SpiData;
    }

}


/**
 *
 * Runnable IoHwAbs_ECUSetForward_Height
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppIOSetHeight_IOSetForward
 *
 */

void IoHwAbs_ECUSetForward_Height (void)
{
	Std_ReturnType status;
	Dio_WriteChennel(DioConfg_DioChannel_HeightMotorCh, STD_HIGH);

}


/**
 *
 * Runnable IoHwAbs_ECUSetForward_Incline
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppIOSetIncline_IOSetForward
 *
 */

void IoHwAbs_ECUSetForward_Incline (void)
{
	Std_ReturnType status;
	 Dio_WriteChennel(DioConfg_DioChannel_InclineMotorCh, STD_HIGH);
}


/**
 *
 * Runnable IoHwAbs_ECUSetForward_Slide
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppIOSetSlide_IOSetForward
 *
 */

void IoHwAbs_ECUSetForward_Slide (void)
{
	Std_ReturnType status;
	Dio_WriteChennel(DioConfg_DioChannel_SlideMotorCh, STD_HIGH);

}


/**
 *
 * Runnable IoHwAbs_ECUSetReverse_Height
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppIOSetHeight_IOSetReverse
 *
 */

void IoHwAbs_ECUSetReverse_Height (void)
{
	Std_ReturnType status;
	 Dio_WriteChennel(DioConfg_DioChannel_HeightMotorCh, STD_LOW);

}


/**
 *
 * Runnable IoHwAbs_ECUSetReverse_Incline
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppIOSetIncline_IOSetReverse
 *
 */

void IoHwAbs_ECUSetReverse_Incline (void)
{
	Std_ReturnType status;
	Dio_WriteChennel(DioConfg_DioChannel_InclineMotorCh, STD_LOW);

}


/**
 *
 * Runnable IoHwAbs_ECUSetReverse_Slide
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppIOSetSlide_IOSetReverse
 *
 */

void IoHwAbs_ECUSetReverse_Slide (void)
{
	Std_ReturnType status;
	Dio_WriteChennel(DioConfg_DioChannel_SlideMotorCh, STD_LOW);

}

