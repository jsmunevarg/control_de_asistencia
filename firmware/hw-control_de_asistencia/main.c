/**
 * 
 */

#include "soc-hw.h"

int main (int argc, char **argv)
{
	uint32_t x='1';
	//x=uart_getchar0();
for(;;){
        prueba();
	uart_putchar0(x);
	uart_putchar1(x);
	//x=uart_getchar1();

}			
}


/*




inline void writeint(uint32_t val)
{
	uint32_t i, digit;

	for (i=0; i<8; i++) {
		digit = (val & 0xf0000000) >> 28;
		if (digit >= 0xA) 
			uart_putchar0('A'+digit-10);
		else
			uart_putchar0('0'+digit);
		val <<= 4;
	}
}

void test2() {
    uart_putchar0('b');   
}

void test() {
    uart_putchar0('a');
    test2();
    uart_putchar0('c');
} 

char glob[] = "Global";

volatile uint32_t *p;
volatile uint8_t *p2;

extern uint32_t tic_msec;

int main()
{
	uint32_t aa=1;

 // for(;;)
 // {
//	  uart_putchar(2*(aa));
 //     uart_putchar((2+(aa++)));

  //}
	   prueba();
   uart_putchar0('b');
   uart_putchar0(2+3);
   uart_putchar0(2*3);
   uart_putchar0(6/3);
   char test2[] = "Lokalerstr";
   char *str = test2;
   uint32_t i;
    
//    for (i = 0; i < 4; i++)
 //       test2[i] = 'l';
  //  glob[0]  = 'g';
    
 	// Initialize stuff
	uart_init();

	// Say Hello!
	uart_putstr0( "** Spike Test Firmware **\n" );

	// Initialize TIC
	isr_init();
	tic_init();
	irq_set_mask( 0x00000002 );
	irq_enable();

	// Say Hello!
	uart_putstr0( "Timer Interrupt instelled.\n" );

	// Do some trivial tests
	uart_putstr0( "Subroutine-Return Test: " );
	test();
	uart_putchar0('\n');    

	uart_putstr0( "Local-Pointer Test:" );
	for (;*str; str++) {
	   uart_putchar0(*str);
	}
	uart_putchar0('\n');    
	
	uart_putstr0( "Global-Pointer Test:" );
	str = glob;
	for (;*str; str++) {
	   uart_putchar0(*str);
	}
	uart_putchar0('\n');    

	uart_putstr0( "Stack Pointer : " );
	writeint(get_sp());
	uart_putchar0('\n');    

	uart_putstr0( "Global Pointer: " );
	writeint(get_gp());
	uart_putchar0('\n');    

	uart_putstr0( "Timer Test (1s): " );
	for(i=0; i<4; i++) {
		uart_putstr0("tic...");    
		msleep(1000);
	}
	uart_putchar0('\n');    

	uart_putstr0( "Timer Interrupt counter: " );
	writeint( tic_msec );
	uart_putchar0('\n');    

	int val = tic_msec;
	uart_putstr0( "Shift: " );
	writeint( val );
	uart_putstr0(" <-> ");    
	for(i=0; i<32; i++) {
		if (val & 0x80000000)
			uart_putchar0( '1' );
		else
			uart_putchar0( '0' );
			
		val <<= 1;
	}
	uart_putstr0("\r\n");
	
	uart_putstr0( "GPIO Test..." );
	gpio0->oe = 0x000000ff;
	for(;;) {
		for(i=0; i<8; i++) {
			uint32_t out1, out2;

			out1 = 0x01 << i;
			out2 = 0x80 >> i;
			gpio0->out = out1 | out2;

			msleep(100);
		}
	}


/*
	uart_putstr( "Memory Dump: " );
	uint32_t *start = (uint32_t *)0x40000000;
	uint32_t *end   = (uint32_t *)0x40000100;
	uint32_t *p;
	for (p=start; p<end; p++) {
		if (((uint32_t)p & 12) == 0) {
			uart_putstr("\r\n[");
			writeint((uint32_t) p);
			uart_putchar(']');    
		}

		uart_putchar(' ');    
		writeint(*p);
	}


	uart_putstr0("Entering Echo Test...\n");
	while (1) {
	   uart_putchar0(uart_getchar0());
	}
}
*/
