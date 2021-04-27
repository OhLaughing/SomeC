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
    printf("%p, %p, %p, %d, %d\n", p, &a, &p, a, *p); // 打印a和*p相同
    *p = 21;
    printf("%p, %p, %p, %d, %d\n", p, &a, &p, a, *p); //a还是1，*p=21
    // 出现a和*p不同的原因是a由const描述，在编译时对a进行优化，把a的值缓存在寄存器中（目的是为了读取效率更高）
    // 通过*p修改&a地址的值，寄存器中缓存的值并没有改变，因此出现打印a和*p的值不同

    const volatile int b = 1;
    int* p1 = &b;
    printf("%p, %p, %p, %d, %d\n", p1, &b, &p1, b, *p1);
    *p1 = 21;
    printf("%p, %p, %p, %d, %d\n", p1, &b, &p1, b, *p1);
    //打印b和*p1的值相同，原因：b用volatile修饰，volatile的作用是提示编译器，该变量是易变的，不能优化，每次都要重内存读取值
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

//typedef 与const一起，const修饰的变量
void test_typedef_const(){
    typedef struct student{
        int num;
    } Str_stu, *Ptr_stu;
    Str_stu s1;
    s1.num=1;
    // 测试ptr1这个指针是不能指向其他地址，还是可以指向其他地址，但是其指向的地址内容不能变化
    const Ptr_stu ptr1 = &s1;
    ptr1->num = 11;
    printf("s1: %d\n", s1.num); //通过指针修改了值，说明并不是ptr1指向的内容不能变

    Str_stu s2;
    s2.num=3;
    // ptr1 = &s2; // 编译错误，说明ptr1指向的位置不能变化

    Ptr_stu const ptr2 = &s1; // const放在Ptr_stu前和后是一样的
    // ptr2 = &s2;
}

void test_union(){
    union data{
        int n;
        char ch;
        short m;
    };
    union data a;
    printf("size of union data:%d,size of a: %d\n", sizeof(union data), sizeof(a));
    a.m = 0x1234;
    printf("%x, %x, %x\n", a.n, a.ch, a.m);
    a.ch = 0x56;
    printf("%x, %x, %x\n", a.n, a.ch, a.m);
    a.n = 0x98765432;
    printf("%x, %x, %x\n", a.n, a.ch, a.m);
}
// int与unsigned int比较
void testUnsignedInt(){
      int ii = -1;
    unsigned int ui=2;
    if (ii < ui) {
         printf("OK\n");
    }
    else {
         printf("error\n");
    }
 
}
