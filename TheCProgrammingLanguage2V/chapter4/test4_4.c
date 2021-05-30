#include<stdio.h>
#define MAXVAL 100
extern int sp;
extern double val[MAXVAL];


void printTop(){
    if(sp>0)
        printf("top of stack: %f\n", val[sp-1]);
    else
        printf("the stack is empty\n");
}

void copyTop(){
    if(sp>0)
        push(val[sp-1]);
    else
        printf("the stack is empty\n");
}

void exchangeTop2(){
    if(sp>1){
        double t1 = pop();
        double t2 = pop();
        push(t1);
        push(t2);
    }else
        printf("the stack is less than 2, cannot exchange top 2 element.\n");
}
void clearStack(){
    sp=0;
}
int stackSize(){
    return sp;
}
