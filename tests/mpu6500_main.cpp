#include <unistd.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

#include "mpu6500.h"

#define delay_ms(a) usleep(a*1000)

int main() {
	if(init() != 1){
        printf("init failed!!! \n");
        return -1;
    }
	do{
		int read_counter = UpdateRawData();
//        printf("read_counter: %d\n", read_counter);
		delay_ms(5);
	}while(1);

	return 0;
}
