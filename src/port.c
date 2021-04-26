
#include "port.h"

void port(){
    DDRB |= (1<<PB0); // set B0 for led
    DDRD &=~ (1<<PD0); // clear bit
    PORTD |= (1<<PD0); // SET BIT
    DDRC &=~ (1<<PC0); // clear bit
    PORTC |= (1<<PC0); // set bit
}