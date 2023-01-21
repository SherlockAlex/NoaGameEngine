#include "new.h"
#include <string.h>

void Creator::Create(char * dir,char * name){
	//cope some file to new project
	//system("echo \"Hello creator\"");
	char * dircmd="mkdir -p ";
	char * cpcmd="cp ./../linux/* ";

	strcat(dircmd,dir);
	strcat(dircmd,"/");
	strcat(dircmd,name);
	std::cout<<dircmd<<std::endl;
	//system(dircmd);			//make dir for new project
	strcat(cpcmd,dir);
	//system(cpcmd);


}
