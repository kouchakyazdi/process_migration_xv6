#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include "fs.h"
void writeInFile(){ 
	struct myStruct { 
	int myint; 
	char mystring; 
	};  
struct myStruct test ; 
test.myint = 0; 
test.mystring = 's';  
int fd; 
fd = open("backup", O_CREATE | O_RDWR);    
if(fd >= 0) {        
	printf(1, "ok: create backup file succeed\n");    
} else {       
 printf(1, "error: create backup file failed\n");        
exit();    
}     
int size = sizeof(test);    
if(write(fd, &test, size) == size){        
printf(1, "succeeeeeeeeeeed\n"); close(fd);        
exit();    
}    
printf(1, "write ok\n");
}
