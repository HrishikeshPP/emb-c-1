/**
 * @file activityone.h
 * @author Nikhil Jose (nikhiljoseniju@gmail.com)
 * @brief headerfile for activityone.c containing function declerations and macros
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
//Header guards

#ifndef _ACTIVITYONE__H_
    #define _ACTIVITYONE__h_

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

/**
 * @brief defining macros
 * 
 */

#define LED (1<<PB0)
#define SEATSWITCH (1<<PD0)
#define HeaterButton (1<<PD1)
#define set |=
#define clear &=~


/**
 * @brief Declaring port function
 * 
 */
void port();

/**
 * @brief Declaring LedBlink function(function to turn on heater)
 * 
 */

void LedBlink();

#endif