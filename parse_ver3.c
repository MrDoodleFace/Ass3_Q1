#include <stdio.h>;
#include <stdbool.h>;
#include <string.h>;

char *buffer;
char *temp;

void initBuffer(char *inputLine){
	buffer = inputLine;
	temp = inputLine;
}

Boolean hasNextToken(){

	for(i=0; i<strlen(buffer); i++){
		if(buffer[i] != ',' && buffer[i] != ' '){
			return 1;
	}
	return 0;
}

char removeChar(int index){
	char removedChar = buffer[index];
	for(i=index; i<strlen(buffer)-1; i++){
		buffer[i] = buffer[i+1];
		if(i == strlen(buffer)-1){
			buffer[i-1] = '\0';
			buffer[i] = '';
		}
	}
	return removedChar;
}

char *nextToken(){
	int looper = 1;
	if (buffer == ''){
		looper = 0;
	}
	char *token = buffer;
	token="";
	while(looper==1){
		if ((buffer[0]==',')&&(token=='')){
			addChar(token,removeChar(0));
			return token;
		} else if ((buffer[0]==',')&&(token!='')){
			return token
		} else if ((buffer[0]==' ')&&(token=='')){
			removeChar(0);
		} else if ((buffer[0]==' ')&&(token!='')){
			removeChar(0);
			return token;
		} else if (buffer[0]=='\0') {
			return token;
		} else {
			addChar(token,removeChar(0));
		}
	}	

	return '';

}


void rewinds(){ //not rewind() since it is a method in an included library
	buffer = temp;
}
