#include <stdio.h>
#include <fcntl.h>
#include <syntax.h>

int main(int argc, char *argv){

	char * line = NULL;
    size_t len = 0;
    ssize_t read;

	FILE *fp = fopen(argv[0],"r+");
	int count =1;
	while ((read = getline(&line, &len, fp)) != -1) {
		if(isValidExpression(line)==0)
     		printf("Error on line:%d\n",count);
    }
	
	fclose(fp);
}