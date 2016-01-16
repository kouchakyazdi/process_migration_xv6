#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include "fs.h"
void readInFile(){   
int fd; 
struct myStruct { 
	int myint; 
	char mystring; 
	};  
struct myStruct test ; 
//char buf[256];    
fd = open("backup", O_RDONLY);    
if(fd >= 0) {        
printf(1, "ok: read backup file succeed\n");    
} else {        
printf(1, "error: read backup file failed\n");        
exit();    
}    
int size = sizeof(test);
read(fd, &test, size) ;      
//printf(1, "error: read from backup file failed\n");        
  
//}    
//int i=0;
//for(i=0;i<256;i++)
	printf(1, "%d %c",test.myint, test.mystring);    
printf(1, "read ok\n");    
close(fd);
}
