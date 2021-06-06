#include "tm4c123gh6pm.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include "tm4c123.h"

#define pi  3.14159265358979323846

void delayMs(int times);
void delayUs(int times2);
void LCD_command(unsigned char command);
void LCD_data(unsigned char data);
void LCD_init(void);
void print_string(char* x);
void Red_Led_On(unsigned char out);
float Get_Distance(float long1, float lat1, float long2, float lat2);
void Init_PortF(void);
bool Reach_Destination(float d);

float distance_test;        //Global Variable For Distance

int main(void){
    SCB->CPACR |= ((3UL << 10*2) | (3UL << 11*2) );                       // to enable float datatype
    Init_PortF();                                                         // to initials Port F 
    LCD_init();                                                           // to initials LCD
    distance_test = Get_Distance(58.6833, 60, 58.6833, 60.00111111);      // testing Get_Distance as the actual Distance between this to points is greater than 100 m
    if((Reach_Destination(distance_test)) == true ){                      // testing  Reached Destination
    }
    return 0;
}
