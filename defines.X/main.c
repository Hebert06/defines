/*
 * File:   main.c
 * Author: 19269311
 *
 * Created on 11 de Março de 2020, 09:23
 */


#include <xc.h>
#include "config.h"

#define LED0 PORTDbits.RD0
#define LED1 PORTDbits.RD1
#define BOTAO_0 PORTDbits.RD2
#define BOTAO_1 PORTDbits.RD3
#define DIR_LED0 TRISDbits.TRISD0
#define DIR_LED1 TRISDbits.TRISD1
#define DIR_BOTAO_0 TRISDbits.TRISD2
#define DIR_BOTAO_1 TRISDbits.TRISD3

#define DIR_ENTRADA 1
#define DIR_SAIDA 0



void main(void)
{
    LED0 = 0;
    LED1 = 1;
    DIR_LED0 = DIR_SAIDA;
    DIR_LED1 = DIR_SAIDA;
    BOTAO_0 = DIR_ENTRADA;
    BOTAO_1 = DIR_ENTRADA;
    
    while(1)
    {
        if( BOTAO_0 == 0 && BOTAO_1 == 0)
        {
            LED0 = 1;
            __delay_ms(500);
            LED0 = 0;
            LED1 = 1;
            __delay_ms(500);
            LED1 = 0;
        }
        if( BOTAO_0 == 1 || BOTAO_1 == 1 )
        {
            LED0 = 1;
            __delay_ms(250);
            LED0 = 0;
            LED1 = 1;
            __delay_ms(250);
            LED1 = 0; 
        }
        if ( BOTAO_0 == 1 && BOTAO_1 == 1 )
        {
            LED0 = 1;
            __delay_ms(100);
            LED0 = 0;
            LED1 = 1;
            __delay_ms(100);
            LED1 = 0;
        }
      
 
    }
    return;
}
