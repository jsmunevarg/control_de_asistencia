#include "soc-hw.h"

#include "cam.h"


#define SIZE_BUFF 20
uint32_t buffer[SIZE_BUFF];

void buffer_clear()
{
	uint32_t i;
    for (i=0; i< SIZE_BUFF;i++)
    	buffer[i]=0;

}

void buffer_upload()
{
	uint32_t i;
    for (i=0; i< SIZE_BUFF;i++)
    	buffer[i]=uart_getchar0();
}

int main()
{
	uint8_t i;

	buffer_clear();
 	buffer[0]=10;
    for(;;){
    	getversioncommand(1);
    	for (i=0; i< SIZE_BUFF;i++)
    	    uart_putchar0(buffer[i]+1);
    	buffer_upload();
    };
}

