#include<stdio.h>
void Swap1(int *pm,int *pn);

int main()
{
    int x = 20;
    int y = 30;
    Swap1(&x,&y);
    printf("x=%d,y=%d\n",x,y);
    return 0;
}

void Swap1(int *pm,int *pn)
{
    int t = *pm;
    *pm = *pn;
    *pn = t;
}
