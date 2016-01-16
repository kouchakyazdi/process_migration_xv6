#include "types.h"
#include "stat.h"
#include "user.h"
#include "param.h"
#include "memlayout.h"
#include "mmu.h"
#include "x86.h"
#include "proc.h"
#include "spinlock.h"
#include "fcntl.h"

void myproc(){

	//printf(1,"\n%d\n",writeproc("tmp",O_CREATE|O_RDWR));
	
	
		   
			int i=0;
			while(i<2){
				sleep(100);
				printf(1,"%d",i);
				i++;
			}
			

		//sleep(400);
writeproc("tmp",O_CREATE|O_RDWR);
			
			

readproc("tmp",O_RDONLY);	
			
		
	    while(1){
				sleep(100);
				printf(1,"%d",i);
				i++;
			}
	    

	//readproc("tmp",O_RDONLY);
printf(1,"\n quitting!!!!!!\n");
	exit();
}
