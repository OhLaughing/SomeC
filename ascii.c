#include<stdio.h>
int main(){
	int i;
	for(i=33;i<130;i++){
		printf("%d:%c ", i,i);
		if(i%10==0)
			printf("\n");
	}
}