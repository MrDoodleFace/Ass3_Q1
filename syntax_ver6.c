#include<stdio.h>
#include<string.h>
#include<ctype.h>

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

int isValidExpression(char *expression){
	initBuffer(expression);
	char *token = expression; //This is done to make a string whose size will never be exceeded by nextToken thus preventing errors
	token = nextToken();
	if ((isValidCommand(token))&&((hasNextToken()==0))){
		return 1;
	} else if (token == "REPEAT"){
		token = nextToken();
		int len = strlen(token);
		for(int i=0;i<len;i++){
			if (isdigit[0]){
				continue;
			} else {
				return 0;
			}
		}

		token = nextToken();

		if (!(token=="TIMES")){
			return 0;
		}

		token = nextToken();

		if (token == "END"){
			return 0;
		}

		int checkComma = 1;
		while (token!="END"){
			while (token==','){
				checkComma == 1;
				token=nextToken();
			}
			if (((isValidCommand(token)))&&(checkComma==1)){
				checkComma==0;
			} else {
				return 0;
			}
			token=nextToken();

		}

		if (hasNextToken()==0){
			return 1
		} else {
			return 0;
		}

	} else if (token == "WHILE"){
		token = nextToken();
		if (token!="NOT"){
			return 0;
		}

		token = nextToken();

		if (token!="DETECTMARKER"){
			return 0;
		}

		token = nextToken();

		if (token!="DO"){
			return 0;
		}		
	} else if (token == "SAY") {
		token = nextToken;

		if (hasNextToken()!=0){
			return 0;
		}

		if ((token[0]=='"')&&(token[(strlen(token)-1)]=='"'){
			return 1;
		}
	} else {
		return 0;
}