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

void main(void)
{
      DDRA = 0B11111111;
      DDRB = 0B01111111;
      DDRC = 0B11111111;
      DDRD = 0B11111111;
      
      while (PINB.7 == 1)
      { 
            delay_ms(10);
            PORTA = 0XFF;
            PORTD = 0XFF;
            delay_ms(500);
            PORTD.7=0;
            PORTA = 0X00;
            PORTD = 0X00;
            
            PORTB = 0XFF;
            PORTC = 0XFF;
            delay_ms(500);
            PORTB = 0X00;
            PORTC = 0X00;
            //if (PINB.7 == 1){delay_ms(10);goto Loop;}
      }

      while (1)
      { 
            //Loop:
            // Yellow LED
            PORTD.7=1;
            delay_ms(3000);
            PORTD.7=0;

            // LED Red

            // 39 -> 30
            {
            PORTB = 0B01101111;
            PORTA = 0B11001111;
            delay_ms(1000);
            PORTB = 0B01111111;
            PORTA = 0B11001111;
            delay_ms(1000);
            PORTB = 0B00000111;
            PORTA = 0B11001111;
            delay_ms(1000);
            PORTB = 0B01111101;
            PORTA = 0B11001111;
            delay_ms(1000);
            PORTB = 0B01101101;
            PORTA = 0B11001111;
            delay_ms(1000);
            PORTB = 0B01100110;
            PORTA = 0B11001111;
            delay_ms(1000);
            PORTB = 0B01001111;
            PORTA = 0B11001111;
            delay_ms(1000);
            PORTB = 0B01011011;
            PORTA = 0B11001111;
            delay_ms(1000);
            PORTB = 0B00000110;
            PORTA = 0B11001111;
            delay_ms(1000);
            PORTB = 0B00111111;
            PORTA = 0B11001111;
            delay_ms(1000);
            }
            // 39 -> 30

            // 30 -> 20
            {
            PORTB = 0B01101111;
            PORTA = 0B11011011;
            delay_ms(1000);
            PORTB = 0B01111111;
            PORTA = 0B11011011;
            delay_ms(1000);
            PORTB = 0B00000111;
            PORTA = 0B11011011;
            delay_ms(1000);
            PORTB = 0B01111101;
            PORTA = 0B11011011;
            delay_ms(1000);
            PORTB = 0B01101101;
            PORTA = 0B11011011;
            delay_ms(1000);
            PORTB = 0B01100110;
            PORTA = 0B11011011;
            delay_ms(1000);
            PORTB = 0B01001111;
            PORTA = 0B11011011;
            delay_ms(1000);
            PORTB = 0B01011011;
            PORTA = 0B11011011;
            delay_ms(1000);
            PORTB = 0B00000110;
            PORTA = 0B11011011;
            delay_ms(1000);
            PORTB = 0B00111111;
            PORTA = 0B11011011;
            delay_ms(1000);
            }
            // 30 -> 20

            // 20 -> 10
            {
            PORTB = 0B01101111;
            PORTA = 0B10000110;
            delay_ms(1000);
            PORTB = 0B01111111;
            PORTA = 0B10000110;
            delay_ms(1000);
            PORTB = 0B00000111;
            PORTA = 0B10000110;
            delay_ms(1000);
            PORTB = 0B01111101;
            PORTA = 0B10000110;
            delay_ms(1000);
            PORTB = 0B01101101;
            PORTA = 0B10000110;
            delay_ms(1000);
            PORTB = 0B01100110;
            PORTA = 0B10000110;
            delay_ms(1000);
            PORTB = 0B01001111;
            PORTA = 0B10000110;
            delay_ms(1000);
            PORTB = 0B01011011;
            PORTA = 0B10000110;
            delay_ms(1000);
            PORTB = 0B00000110;
            PORTA = 0B10000110;
            delay_ms(1000);
            PORTB = 0B00111111;
            PORTA = 0B10000110;
            delay_ms(1000);
            }
            // 20 -> 10

            // 10 -> 00
            {
            PORTB = 0B01101111;
            PORTA = 0B10111111;
            delay_ms(1000);
            PORTB = 0B01111111;
            PORTA = 0B10111111;
            delay_ms(1000);
            PORTB = 0B00000111;
            PORTA = 0B10111111;
            delay_ms(1000);
            PORTB = 0B01111101;
            PORTA = 0B10111111;
            delay_ms(1000);
            PORTB = 0B01101101;
            PORTA = 0B10111111;
            delay_ms(1000);
            PORTB = 0B01100110;
            PORTA = 0B10111111;
            delay_ms(1000);
            PORTB = 0B01001111;
            PORTA = 0B10111111;
            delay_ms(1000);
            PORTB = 0B01011011;
            PORTA = 0B10111111;
            delay_ms(1000);
            PORTB = 0B00000110;
            PORTA = 0B10111111;
            delay_ms(1000);
            PORTB = 0B00111111;
            PORTA = 0B10111111;
            delay_ms(1000);
            PORTB = 0B00000000;
            PORTA = 0B00000000;
            }
            // 10 -> 00

            // Yellow LED
            PORTD.7=1;
            delay_ms(3000);
            PORTD.7=0;
            // Green LED
            // 39 -> 30
            {
            PORTD = 0B01101111;
            PORTC = 0B11001111;
            delay_ms(1000);
            PORTD = 0B01111111;
            PORTC = 0B11001111;
            delay_ms(1000);
            PORTD = 0B00000111;
            PORTC = 0B11001111;
            delay_ms(1000);
            PORTD = 0B01111101;
            PORTC = 0B11001111;
            delay_ms(1000);
            PORTD = 0B01101101;
            PORTC = 0B11001111;
            delay_ms(1000);
            PORTD = 0B01100110;
            PORTC = 0B11001111;
            delay_ms(1000);
            PORTD = 0B01001111;
            PORTC = 0B11001111;
            delay_ms(1000);
            PORTD = 0B01011011;
            PORTC = 0B11001111;
            delay_ms(1000);
            PORTD = 0B00000110;
            PORTC = 0B11001111;
            delay_ms(1000);
            PORTD = 0B00111111;
            PORTC = 0B11001111;
            delay_ms(1000);
            }
            // 39 -> 30
            
            // 30 -> 20
            {
            PORTD = 0B01101111;
            PORTC = 0B11011011;
            delay_ms(1000);
            PORTD = 0B01111111;
            PORTC = 0B11011011;
            delay_ms(1000);
            PORTD = 0B00000111;
            PORTC = 0B11011011;
            delay_ms(1000);
            PORTD = 0B01111101;
            PORTC = 0B11011011;
            delay_ms(1000);
            PORTD = 0B01101101;
            PORTC = 0B11011011;
            delay_ms(1000);
            PORTD = 0B01100110;
            PORTC = 0B11011011;
            delay_ms(1000);
            PORTD = 0B01001111;
            PORTC = 0B11011011;
            delay_ms(1000);
            PORTD = 0B01011011;
            PORTC = 0B11011011;
            delay_ms(1000);
            PORTD = 0B00000110;
            PORTC = 0B11011011;
            delay_ms(1000);
            PORTD = 0B00111111;
            PORTC = 0B11011011;
            delay_ms(1000);
            }
            // 30 -> 20

            // 20 -> 10
            {
            PORTD = 0B01101111;
            PORTC = 0B10000110;
            delay_ms(1000);
            PORTD = 0B01111111;
            PORTC = 0B10000110;
            delay_ms(1000);
            PORTD = 0B00000111;
            PORTC = 0B10000110;
            delay_ms(1000);
            PORTD = 0B01111101;
            PORTC = 0B10000110;
            delay_ms(1000);
            PORTD = 0B01101101;
            PORTC = 0B10000110;
            delay_ms(1000);
            PORTD = 0B01100110;
            PORTC = 0B10000110;
            delay_ms(1000);
            PORTD = 0B01001111;
            PORTC = 0B10000110;
            delay_ms(1000);
            PORTD = 0B01011011;
            PORTC = 0B10000110;
            delay_ms(1000);
            PORTD = 0B00000110;
            PORTC = 0B10000110;
            delay_ms(1000);
            PORTD = 0B00111111;
            PORTC = 0B10000110;
            delay_ms(1000);
            }
            // 20 -> 10

            // 10 -> 00
            {
            PORTD = 0B01101111;
            PORTC = 0B10111111;
            delay_ms(1000);
            PORTD = 0B01111111;
            PORTC = 0B10111111;
            delay_ms(1000);
            PORTD = 0B00000111;
            PORTC = 0B10111111;
            delay_ms(1000);
            PORTD = 0B01111101;
            PORTC = 0B10111111;
            delay_ms(1000);
            PORTD = 0B01101101;
            PORTC = 0B10111111;
            delay_ms(1000);
            PORTD = 0B01100110;
            PORTC = 0B10111111;
            delay_ms(1000);
            PORTD = 0B01001111;
            PORTC = 0B10111111;
            delay_ms(1000);
            PORTD = 0B01011011;
            PORTC = 0B10111111;
            delay_ms(1000);
            PORTD = 0B00000110;
            PORTC = 0B10111111;
            delay_ms(1000);
            PORTD = 0B00111111;
            PORTC = 0B10111111;
            delay_ms(1000);
            PORTC = 0B00000000;
            }
            // 10 -> 00
      }
}
