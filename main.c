int main(void){
    SCB->CPACR |= ((3UL << 10*2) | (3UL << 11*2) );                       // to enable float datatype
    Init_PortF();                                                         // to initials Port F 
    LCD_init();                                                           // to initials LCD
    distance_test = Get_Distance(58.6833, 60, 58.6833, 60.00111111);      // testing Get_Distance as the actual Distance between this to points is greater than 100 m
    if((Reach_Destination(distance_test)) == true ){                      // testing  Reached Destination
    }
    return 0;
}
