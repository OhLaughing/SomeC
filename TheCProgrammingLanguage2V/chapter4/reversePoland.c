#include<stdio.h>
#define MAXOP 100
#define NUMBER '0'
int getop(char []);
void push(double);
double pop();
double atof(char s[]);
void reversePoland(){
    int type;
    double op2;
    char s[MAXOP];
    while((type=getop(s))!=EOF){
        switch(type){
        case NUMBER:
            printf("%s\n", s);
            printf("%.8g\n", atof(s));
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
