#include <stdio.h>
#include "learn.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define MAXLINE 100

char pattern[] = "ould"; 

int main(int argc, char** argv) {
	printf("helloworld\n");
	char line[MAXLINE];
	int found=0;
	while(getline(line,MAXLINE))
		if(strindex(line,pattern)>=0){
			printf("%s",line);
			found++;
		}
	
	return found;
}
