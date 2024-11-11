#include <msp430.h>

int main(void){

	//Stop watchdog timer
	WDTCTL = WDTPW | WDTHOLD;
	PM5CTL0 &= ~LOCKLPM5;
	
	P1DIR |= BIT2;

	P1OUT &= ~BIT2;
	//Set P1.2 as output
	//P1DIR |= BIT2;

	//Set P1.0 as output
	//P1DIR |= BIT0; 

	//Send logic high signal on P1.2
	//P1OUT |= BIT2;
	//P1OUT |= BIT0;	

	while(1){
		P1OUT ^= BIT2;
		//P1OUT ^= BIT0;	
		__delay_cycles(1000000L);

	}

	return 0;
}
