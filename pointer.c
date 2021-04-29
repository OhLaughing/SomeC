//通过函数指针调用方法,入参指定指针类型
//入参指针类型：指针指向函数入参为空，返回值为void
void callfuncwithPtr(void (*p)())
{
    (*p)();
}
//入参为void指针，不能直接调用该指针，必须在调用前将指针转为特定类型的指针
void callfuncwithPtr1(void *p)
{
    void (*p1)() = p;
    (*p1)();
}

//测试指向函数的指针
void testFuncPtr(){
    void(*p)()=testEof; 
    callfuncwithPtr(p);
}
