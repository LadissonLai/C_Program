#include<stdio.h>
void Func001(char *pstr);

int main(int argc,char* argv[])
{
    void (*pfunc)(char *); //����һ������ָ�룬��������൱��һ��ί��
    pfunc = Func001;
    char str[] = "i love unity !";
    (*pfunc)(str);

    return 0;
}

void Func001(char *pstr)
{
    puts(pstr);
}
