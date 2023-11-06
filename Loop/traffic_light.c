/*******************************************************
This program was created by the
CodeWizardAVR V3.12 Advanced
Automatic Program Generator
� Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 31/10/2023
Author  : 
Company : 
Comments: 


Chip type               : ATmega16A
Program type            : Application
AVR Core Clock frequency: 8.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 256
*******************************************************/

#include <mega16a.h>
#include <delay.h>

// Declare your global variables here
unsigned char seg[11] = {0B00111111,0B00000110,0B01011011,0B01001111,0B01100110,0B01101101,0B01111101,0B00000111,0B01111111,0B01101111};
int i=0;

void main(void)
{
      DDRA = 0B11111111;
      DDRB = 0B01111111;
      DDRC = 0B11111111;
      DDRD = 0B11111111;

      while (1)
      { 
            for(i=40 ; i>=0 ; i--)
            {
                  //PORTA.7=1;
                  PORTC=(0<<PORTC7);
                  PORTA=(1<<PORTA7) | seg[i/10];
                  PORTB=seg[i%10]; 
                  delay_ms(500);
                  if (i == 0)
                  {
                        PORTA=(0<<PORTA7);
                        PORTD.7=1;
                        delay_ms(3000);
                        for(i=40 ; i>=0 ; i--)
                        {
                              //PORTC.7=1;
                              PORTC=(1<<PORTC7) | seg[i/10];
                              PORTD=seg[i%10]; 
                              delay_ms(500);
                        }
                  }    
            }
      }
}
