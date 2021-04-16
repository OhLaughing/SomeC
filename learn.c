void test_const(){
    int a =1;
    int b = 2;
    int * const ptr = &a;
    // ptr = &b; //ptr 由const修饰，不能改变，编译失败
    const int*ptr1 = &a;
    ptr1 = &b; //ptr 能改变
    // *ptr1 = 3; //*ptr 由const修饰，不能改变，编译失败
    int const *p = &a; //和const int* p一样 
}

// 通过指向const变量的指针修改const的值？
// 没有达到修改目的，？？
void modify_const_with_point(){
    const int a =1;
    int* p = (int *)&a;
    printf("%p, %p, %p, %d, %d\n", p, &a, &p, a, *p);
    *p = 21;
    printf("%p, %p, %p, %d, %d\n", p, &a, &p, a, *p);
}

void test_endian1(){
    int a =0x01020304;
    int* p =&a;
    char c = *(char *)p;
    printf("%d\n", c);
    if( c == 4){
        printf("小端\n");
    }else{
        printf("大端\n");
    }
}

void test_endia2(){
    int a[]={1,2,3};
    int *ptr1 = (int*)(&a+1);
    int * ptr2 = (int*)((int)a+1);
    printf("0x%d,%x\n", *ptr1, *ptr2);
    printf("0x%x\n", 15);
    int b = 1;
    char * ptrc = (char*)(a);
    for (size_t i = 0; i < 8; i++)
    {
        printf("%d ", *ptrc);
        ptrc++;
    }  
}
