#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "ADC_interface.h"
#include "ADC_config.h"
#include "ADC_private.h"

void ADC_voidInit(void);
u8 ADC_u8GetDigitalValue(u8 Copy_u8ChannelNumber, u16 * Copy_pu16DigitalValue) 