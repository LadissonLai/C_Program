#include<stdio.h>

int main(int argc,char* argv[])
{
    int i = 0;
    printf("argc = %d\n",argc);
    for(;i<argc;i++)
    {
        printf("%s.",argv[i]);
    }
    printf("\n");


    return 0;
}
