
#include<stdio.h>
#define MAXOP 100
#define NUMBER '0'
int getop(char []);
void push(double);
double pop();
double atof(char s[]);
void reversePoland_1(){
    int type;
    double op2;
    char s[MAXOP];
    while((type=getop(s))!=EOF){
        switch(type){
        case NUMBER:
            push(atof(s));
            break;
        case  '+':
            push(pop()+pop());
            break;
        case  '*':
            push(pop()*pop());
            break;
        case  '-':
            op2 = pop();
            push(pop()-op2);
            break;
        case  '%':
            op2 = pop();
            if(op2 != 0.0)
              push(fmod(pop(),op2));
            else
                printf("error: zero divisor\n");
            break;
        case  '/':
            op2 = pop();
            if(op2!=0.0)
                push(pop()/op2);
            else
                printf("error: zero divisor\n");
            break;
        case  '\n':
            printf("\t%.8g\n", pop());
            break;
        default:
            printf("error: unknown command %s\n", s);
            break;

        }
    }
}
void fmodtest(){
    double d1,d2;
    d1 = -2.3, d2 = 1.1;
    printf("d1:%f, d2:%f, %f\n", d1,d2, fmod(d1,d2));
}
