#include <stdio.h>
#include<ctype.h>
#include<string.h>
#include "myinclude.h"

struct key keytab[] = 
  {
    "auto", 0,
    "break", 0,
    "case", 0,
    "char", 0,
    "continue", 0,
    /*...*/
    "unsigned", 0,
    "void", 0,
    "volatile", 0,
    "while", 0
  };
void print(){
	struct key* p;
	
	for(p = keytab;p<keytab+NKEYS; p++){
		printf("%s:%d, ",p->word,p->count );
	}
	printf("\n");
}

void testgetWord(){
	char word[30];
	while(1){
		int i = getword(word,30);
		printf("%s, %d\n", word, i);
		if('Q' == word[0])
		break;
	}

}
  
void testkeywordNum(void){
	char word[MAXWORD];
  	struct key *p;

  	while(getword(word, MAXWORD) != EOF)
    if (isalpha(word[0])){
	  
      if ((p = binsearch(word, keytab, NKEYS)) != NULL){
	  	p->count++;
	  	
	  	if('Q' == word[0]){
	  		printf("Quit\n");
		  	break;
		  }
	  }
	  print();
	}
		
  	for (p = keytab; p < keytab + NKEYS; p++)
    	if (p->count > 0)
      		printf("%4d %s\n",
	     	p->count, p->word);
}
