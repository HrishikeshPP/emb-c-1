/**
 * @file activityone.c
 * @author Nikhil Jose (nikhiljoseniju@gmail.com)
 * @brief library containing led toggle function and port definitions
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activityone.h"

/**
 * @brief FLAG variable to store the value of flag
 * 
 */
unsigned volatile FLAG=0;

/**
 * @brief Port definitions for led and seat and heater switch
 * 
 */
void port(){
    DDRB set LED; // set B0 for led
    DDRD clear SEATSWITCH; // clear bit
    PORTD set SEATSWITCH; // SET BIT
    DDRD clear HeaterButton; // clear bit
    PORTD set HeaterButton; //SET BIT


}

/**
 * @brief function to set LED for two second
 * 
 */
void LedBlink()
{
    

           PORTB set LED;
            _delay_ms(2000);
}
