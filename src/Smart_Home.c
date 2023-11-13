/****************Smart Home main*****************/
/********Authors: Amira Magdy,Abdelrahman********/
/******************Ver.: 0.0.1.******************/
/****************Date:08/10/2023.****************/
/************************************************/

#include "../inc/STD_TYPES.h"
#include "../inc/BIT_MATH.h"
#include "../lib/SH_interface.h"

int main(void)
{
	SmartHome_voidInit();
	while (1)
	{
		SmartHome_voidStart();
	}
	return 0;
}
