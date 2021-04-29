
#include "activityone.h"


unsigned volatile FLAG=0;

void port(){
    DDRB set LED; // set B0 for led
    DDRD clear SEATSWITCH; // clear bit
    PORTD set SEATSWITCH; // SET BIT
    DDRD clear HeaterButton; // clear bit
    PORTD set HeaterButton; //SET BIT

    EICRA set InterruptType; // SET ISC01 HIGH
    EIMSK set InterruptMask; //SET PIN D2 HIGH

    sei();

}

void LedBlink(){
    /**
     * @brief if person is seated and heater switch is pressed LED(Heater) will turn ON
     * 
     */
      if((!((PIND)&SEATSWITCH))&& (FLAG == 1)) // SEAT SWITCH PRESSED AND HEATER SWITCH PRESSED
       {
           PORTB set LED;
            _delay_ms(2000);
            FLAG=0;
       }
       else
       {
           PORTB clear LED;

            // _delay_ms(20);

       }
}

ISR(INT0_vect)
{
    FLAG =1;
}