/*
 * main.c
 *
 *  Created on: Jan 29, 2020
 *      Author: IOT scientist
 */
/*
 * main.c
 *
 *  Created on: Jan 28, 2020
 *      Author: IOT scientist
 */
#include"avr/delay.h"
#include "STD_TYPES.H"
#include "BIT_math.h"
#include "DIO_int.h"
#include "LCD_int.h"
#include "LCD_cfg.h"
void vdWriteMyNameArabic(void);
int main (void)
{
	DIO_vdSetPortDirection(LCD_CTRL_PORT,OUTPUT);
	DIO_vdSetPortDirection(LCD_DATA_PORT,OUTPUT);
	//DIO_vdSetPinValue(LCD_DATA_PORT,4,HIGH);
//	LCD_vdWriteCommand(LCD_WriteFromLeftToRight);
	LCD_vdInit();
	LCD_vdWriteString("eslam");
//	vdWriteMyNameArabic();

	while(1)
	{
//		LCD_vdShiftRight();
//		LCD_vdClearDisplay();
		//LCD_vdWriteData('e');
		_delay_ms(1000);
	}
	return 0;
}
void vdWriteMyNameArabic(void)
{
	LCD_vdWriteCommand(0x40);
	LCD_vdWriteData(0x04);
	LCD_vdWriteData(0x04);
	LCD_vdWriteData(0x04);
	LCD_vdWriteData(0x04);
	LCD_vdWriteData(0x04);
	LCD_vdWriteData(0x04);
	LCD_vdWriteData(0x04);
	LCD_vdWriteData(0x04);
	LCD_vdWriteCommand(0x8f);
	LCD_vdWriteData(0x00);

	LCD_vdWriteCommand(0x48);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x1f);
	LCD_vdWriteCommand(0x8e);
	LCD_vdWriteData(0x01);

	LCD_vdWriteCommand(0x50);
	LCD_vdWriteData(0x05);
	LCD_vdWriteData(0x05);
	LCD_vdWriteData(0x05);
	LCD_vdWriteData(0x05);
	LCD_vdWriteData(0x05);
	LCD_vdWriteData(0x05);
	LCD_vdWriteData(0x05);
	LCD_vdWriteData(0x1f);
	LCD_vdWriteCommand(0x8d);
	LCD_vdWriteData(0x02);

	LCD_vdWriteCommand(0x58);
	LCD_vdWriteData(0x07);
	LCD_vdWriteData(0x05);
	LCD_vdWriteData(0x1f);
	LCD_vdWriteData(0x10);
	LCD_vdWriteData(0x10);
	LCD_vdWriteData(0x10);
	LCD_vdWriteData(0x10);
	LCD_vdWriteData(0x10);
	LCD_vdWriteCommand(0x8c);
	LCD_vdWriteData(0x03);

	LCD_vdWriteCommand(0x60);
	LCD_vdWriteData(0x04);
	LCD_vdWriteData(0x04);
	LCD_vdWriteData(0x04);
	LCD_vdWriteData(0x04);
	LCD_vdWriteData(0x04);
	LCD_vdWriteData(0x04);
	LCD_vdWriteData(0x04);
	LCD_vdWriteData(0x04);
	LCD_vdWriteCommand(0x8a);
	LCD_vdWriteData(0x04);

	LCD_vdWriteCommand(0x68);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x07);
	LCD_vdWriteData(0x01);
	LCD_vdWriteData(0x1f);
	LCD_vdWriteCommand(0x89);
	LCD_vdWriteData(0x05);

	LCD_vdWriteCommand(0x70);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x0e);
	LCD_vdWriteData(0x0a);
	LCD_vdWriteData(0x1f);
	LCD_vdWriteCommand(0x88);
	LCD_vdWriteData(0x06);

	LCD_vdWriteCommand(0x78);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x00);
	LCD_vdWriteData(0x02);
	LCD_vdWriteData(0x02);
	LCD_vdWriteData(0x1f);
	LCD_vdWriteCommand(0x87);
	LCD_vdWriteData(0x07);

//	LCD_vdWriteCommand(0x8C);

}




