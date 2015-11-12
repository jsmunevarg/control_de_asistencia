
#include "cam.h"
#include "soc-hw.h"

void resetcommand(char c){

	uart_putchar1(COMMANDSEND);
	uart_putchar1(SERIALNUM);
	uart_putchar1(CMD_RESET);
	uart_putchar1(COMMANDEND);
//msleep(3000);*/
/*	
	int32_t arreglo[10];
    	int32_t	size=11;
    	//int32_t	size_1=9;
	int8_t i=0;
	int8_t x=0;


		for (i =  0; i <  (size); i++){
				x=uart_getchar0();
				uart_putchar1(x);
				arreglo[i]=uart_getchar1();
		}
*/
		//if (arreglo[0]==0x76 && arreglo[2]==0x26){
		
						//uart_putchar0(0x20);
			//}
/*
		for (i =  0; i <  (size); i++){
				uart_putchar0(arreglo[i]);
		}
*/
}

void getversioncommand(char c)
{
	uart_putchar1(COMMANDSEND);
	//msleep(5);
	uart_putchar1(SERIALNUM);
	//msleep(5);
	uart_putchar1(CMD_GETVERSION);
	//msleep(5);	
	uart_putchar1(COMMANDEND);	
	//x=uart_getchar1();
	//uart_putchar0(uart_getchar1());
//	msleep(3000);
	
	uint32_t arreglo_get[15];
    	uint32_t	size_get=16;
	uint32_t i_get=0;

for (i_get =  0; i_get <  (size_get); i_get++){
		arreglo_get[i_get]=0;
}

for (i_get =  0; i_get <  (size_get); i_get++){
		arreglo_get[i_get]=uart_getchar1();
}

//if (arreglo_get[0]==0x76 && arreglo_get[2]==0x11){
		
		for (i_get =  0; i_get <  (size_get); i_get++){
		uart_putchar0(arreglo_get[i_get]);
			}
	//}

//  esta es la parte para probar si los comamando si llegan a la camara 
}

/*
void takephotocommand(char c)
{
	uint32_t x='0';	

	uart_putchar1(COMMANDSEND);
	//msleep(5);
	uart_putchar1(SERIALNUM);
	//msleep(5);
	uart_putchar1(CMD_TAKEPHOTO);
	//msleep(5);
	uart_putchar1(CONS);	
	uart_putchar1(FBUF_STOPCURRENTFRAME);	
	//x=uart_getchar1();
	//uart_putchar0(uart_getchar1());
	//msleep(1000);
	
}
*/
void pppp()
{
// esta es mi version para la recepcion de lo que manda la camara; la funcion esta comentariada en el main
	/*	
	int32_t  *p;
	int32_t arreglo[30];
	int8_t start=0;
    	int32_t	size=29;
    	//int32_t	size_1=9;
	int8_t i=0;
	//int8_t j=0;
*/
	/*
	for (p = (int8_t *) start; p < (int8_t *) (start+size); p++)
	{
		*p = uart_getchar1();

	}
    	for (p = (int8_t *) start; p < (int8_t *) (start+size); p++)
	{
		uart_putchar0( *p );
	} 
*/

//msleep(1000);

/*
for (j =  start; j <  (start+size_1); j++)
	{

		for (i =  start; i <  (start+size); i++)
			{
		arreglo[j][i]=uart_getchar1();

			}
}
  

for (j =  start; j <  (start+size_1); j++)
	{
p = &arreglo[j][0];
		for (i =  start; i <  (start+size); i++)
			{
		uart_putchar0( *(p+i) );

			}
}


for (j =  start; j <  (start+size_1); j++)
	{
p = &arreglo[j][0];
		for (i =  start; i <  (start+size); i++)
			{
		arreglo[j][i]=0;

			}
}

*/

//msleep(1000);

//p = &arreglo[0]; 

		
	
}


















/*

uint8_t buffcam[5];

void uart_buff(uint8_t tam)
{
	uint8_t ind=0;

	while(ind<tam)
		buffcam[ind++]=uart_getchar1();
}

void debug_buff(uint8_t tam)
{
	uint8_t ind=0;

	while(ind<tam)
		uart_putchar0(buffcam[ind++]);
}

void ppcomm()
{
	buffcam[0]=31;
	buffcam[1]=32;
	buffcam[2]=33;
	buffcam[3]=34;
	buffcam[4]=35;
}

void getversioncommand(char c)
{
	
	
	uint32_t x = '3';
	uint32_t y = '5';
	x=uart_getuart_putchar1(COMMANDSEND);char0();
	uart_putchar1(x);
	y=uart_getchar1();
	uart_putchar0(y);
	
	
	uart_putchar0(buffcam[0]);
	uart_putchar0(buffcam[1]);
	uart_putchar0(buffcam[2]);
	uart_putchar0(buffcam[3]);
	uart_putchar0(buffcam[4]);
	uart_putchar0(buffcam[5]);
	

	uart_putchar1(COMMANDSEND);
	uart_putchar1(SERIALNUM);
	uart_putchar1(CMD_GETVERSION);
	uart_putchar1(COMMANDEND);

	uart_buff(17);
	debug_buff(17);

}*/
