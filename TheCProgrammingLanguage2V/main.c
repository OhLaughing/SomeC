#include <stdio.h>
#include "learn.h"
#include<ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define MAXLINE 100

void testisalpha(){
	printf("%d\n",isalpha('1'));
	printf("%d\n",isalpha('a'));
	printf("%d\n",isalpha('A'));
}

void testsozeofstruct(){
	struct st{
		char c;
		int i;
		struct st* left;
	
	};
	printf("sizeof struct st: %d\n", sizeof(struct st));
} 
void testkeywordNum(void);
void testgetWord(void);
int main(int argc, char** argv) {
	 testsozeofstruct(); 
	testgetWord();
	
}
