#include "soc-hw.h"

#include "cam.h"


int main()
{
	uint8_t i;
	uint32_t bytes;
		
    		imagesize(1);
    		getversioncommand(1);
		takephotocommand(1);
		bytes=getbufflencommand();
		readphotocommand(bytes);
		resetcommand(1);

   
}

