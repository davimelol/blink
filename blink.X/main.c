/*
 * File:   main.c
 * Author: 20185086
 *
 * Created on 12 de Fevereiro de 2021, 15:53
 */


#include <xc.h>
#include "config.h"

void main(void) 
{
TRISDbits.TRISD7 = 0;   
   
    while(1)
    {    
        PORTDbits.RD7 = 1;
        __delay_ms(500);
        PORTDbits.RD7 = 0;
    }
}
