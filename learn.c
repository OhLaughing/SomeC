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
void test_endian1(){
    int a =0x01020304;
    int* p =&a;
    char c = *(char *)p;
    printf("%d\n", c);
    if( c == 4){
        printf("小端\n");
    }else{
        printf("小端\n");
    }
}
