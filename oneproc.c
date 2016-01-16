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
	int child=fork();
	if(child >= 0) // fork was successful
	    {
		if(child == 0) // child process
		{
	
		    printf(1,"Child Process %d.\n",child);
			int i=0;
			while(1){
				sleep(100);
				printf(1,"%d",i);
				i++;
			}
			
			
			
		}
		else //Parent process
		{
		    printf(1,"Parent process %d.\n",child);
			sleep(400);
writeproc("tmp",O_CREATE|O_RDWR);
			kill(child);
			//if(kill(child)==0){
			//printf(1,"kill succeed! .\n");

readproc("tmp",O_RDONLY);	
			//}
			//else{
	
			//printf(1,"kill failed .\n");
			//}
		}
	    }
	    else // fork failed
	    {
		printf(1,"\n Fork failed, quitting!!!!!!\n");
		exit();
	    }

	//readproc("tmp",O_RDONLY);
printf(1,"\n quitting!!!!!!\n");
	exit();
}
