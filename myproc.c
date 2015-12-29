#include "types.h"
#include "stat.h"
#include "user.h"


void myproc(){
	int i=0;
	while(1){
		sleep(100);
		printf(1,"%d",i);
		i++;
	}
	
}
