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
	int i=0;
	while(i<2){
		sleep(100);
		printf(1,"%d",i);
		i++;
	}

	printf(1,"\n%d\n",writeproc("tmp",O_CREATE|O_RDWR));
	printf(1,"%d\n",readproc("tmp",O_RDONLY));
	exit();
}
