#include<stdio.h>
#include<string.h>

int main(int argc, char *argv){
	
}

int isValidCommand(char *token){
	switch(token) {

   		case "TAKEASTEP" :
     		return 1;
	
   		case "LEFT" :
     		return 1;

      	case "RIGHT" :
     		return 1;

      	case "PICKUP" :
     		return 1;

      	case "DROP" ::
     		return 1;

      	case "DETECTMARKER" :
     		return 1;

      	case "TURNON" :
     		return 1;

      	case "TURNOFF" :
     		return 1;

   		default :
   			return 0;
}

