// 本文件中定义char数组，其他文件extern char filea[];可以 引用数组，但是不能通过sizeof获取数组长度
char filea[] = "/home/test1.txt";

void printa(){
  printf("sizeof: %d\n", sizeof(filea));
}

char *fileb = "/home/test2.txt";
void printb(){
  printf("sizeof: %d\n", sizeof(fileb));
}
