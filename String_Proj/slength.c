#include<stdio.h>
int Slength(char* pstr);

int main()
{
    //�����ַ����ĳ������ַ�ʽ
    char str1[] = "this is my first string.";
    char* str2 = "this is my first string.";
    int count1 = 0;
    int count2 = 0;
    count1 = Slength(str1);
    count2 = Slength(str2);
    puts(str1);
    printf("these two strings counts are %d, %d.\n",count1,count2);

    return 0;
}

//�����ַ����ĳ���
int Slength(char* pstr)
{
    int count=0;
    while(pstr[count]!='\0')
    {
        count++;
    }
    return count;
}
