#include <stdio.h>

#define N 4
int IsHuiText(char* p,int arrNum);

int main()
{
    char huiText[N] = {'a','b','b','a'};
    char huiText1[N+1] = {'a','b','b','c','d'};
    if(IsHuiText(huiText,N))
    {
        printf("这是回文串\n");
    }
    else
    {
        printf("这不是回文串\n");
    }

    if(IsHuiText(huiText1,N+1))
    {
        printf("这是回文串\n");
    }
    else
    {
        printf("这不是回文串\n");
    }

    return 0;
}

int IsHuiText(char* p,int arrNum)
{
    int result = 1;
    int i = 0;
    int j = 0;
    for(i=0,j=arrNum-1; i<=j; i++,j--)
    {
        if(p[i]!=p[j])
        {
            result = 0;
            return result;
        }
    }
    return result;
}
