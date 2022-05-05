#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include "C1600R.h"

//$ python3 loader3.py -b0x2002000 -e0x2002400 bmbinary.rom

void
io_ports(void)
{
	uint32_t ctr;
	
	//PCDAT = 0x0FEFF; // 566 Red LED ON
	PCDAT = 0x0FBFF; // 566 D8 LED ON	
	for (ctr = 30000; ctr > 0; ctr--);
	PCDAT = 0x0FAFF; // 566 Red LED ON and D8 LED ON
}

int
main(void)
{
	uint32_t ctr;
    
    io_ports();
            
				/* Service the watchdog and reset the PIT configuration */
                SWSR = 0x55;
                SWSR = 0xAA;
                PITRbits.CTR = 0;
                PICR = 0x000F;
	
	for (;;) {
				PCDAT = 0x0FEFF; // 566 Red LED ON
				//PCDAT = 0x0FBFF; // 566 D8 LED ON	
				//PCDAT = 0x0FAFF; // 566 Red LED ON and D8 LED ON
		
                for (ctr = 50000; ctr > 0; ctr--);
				PCDAT = 0x0FAFF; // 566 Red LED ON and D8 LED ON
				for (ctr = 50000; ctr > 0; ctr--);	
			    
				/* Service the watchdog and reset the PIT configuration */
                SWSR = 0x55;
                SWSR = 0xAA;
                PITRbits.CTR = 0;
                PICR = 0x000F;	
	}
}