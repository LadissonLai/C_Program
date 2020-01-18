#include<stdio.h>
void Func001(char *pstr);

int main(int argc,char* argv[])
{
    void (*pfunc)(char *); //定义一个函数指针，这里就是相当于一个委托
    pfunc = Func001;
    char str[] = "i love unity !";
    (*pfunc)(str);

    return 0;
}

void Func001(char *pstr)
{
    puts(pstr);
}
