#include "soc-hw.h"

#include "cam.h"

int buffertec[SIZE_BUFFTEC];
void buffertec_upload(uint32_t size);
//void buffertec_uartsend(uint32_t size);
void buffertec_clear();


int main()
{
	
	uint32_t bytes;

		for(;;)
{
		buffertec_upload(60);
		uint32_t i;
		    for (i=0; i< 60;i++)
		    {
			//uart_putchar0(buffertec[0]);	
			if(buffertec[i] == buffertec[0])
			{
				buffertec_clear();
			}
	    	    }
		//uart_putchar0(buffertec[0]);	
		

		//CAMARA
if (buffertec[0] == 0x01){
		resetcommand(1);
    		imagesize(1);
    		getversioncommand(1);
		takephotocommand(1);
		bytes=getbufflencommand();
		readphotocommand(bytes);

		//TECLADO
/*
		for(;;)
		{
			while(!lcd0.RS);
			lcd0.in_lcd=i++;
			msleep(1000);
		}
*/
		
		//LCD
		//lcd_putchar(buffertec[0]);
   }
}
}


void buffertec_clear()
{
	uint32_t i;
    for (i=1; i< SIZE_BUFFTEC;i++)
    	buffertec[i]=0;

}

void buffertec_upload(uint32_t size)
{
	uint32_t i;
        for (i=0; i< size;i++)
    	    buffertec[i]=read_number();
}
