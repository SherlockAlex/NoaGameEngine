#include <iostream>
#include <string.h>
#include "new.h"

int main(int argc,char * argv[]){
	Creator * creator=new Creator();
	
	//noagame new projectname dir
	if(strcmp("new",argv[1])==0){
		
		creator->Create(argv[3],argv[2]);
	}
	//new project

	return 0;
}
