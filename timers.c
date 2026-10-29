#include "main.h"

void init_timer2(void)
{

    TMR2ON = 0;

    TMR2IE = 1;

    PR2 = 250;
}
