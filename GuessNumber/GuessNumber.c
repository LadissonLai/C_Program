#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int InputNum();
int GuessNumber(int myNum);
int main()
{
    int num = 0;
    int ret = 0;
    do
    {
        num = InputNum();
        ret = GuessNumber(num);
    }while(ret < 0);

    printf("Congratulations! %d times.\n",ret);

    return 0;
}

int GuessNumber(int myNum)
{
    static int target = -1; /*在程序从main函数运行之前，就初始化了*/
    static int times = 0;
    times++;
    if(target<0)
    {
        srand(time(NULL));
        target = rand() % 15;
    }

    if(myNum < target)
    {
        printf("Too small!\n");
        return -1;
    }
    else if(myNum > target)
    {
        printf("Too large!\n");
        return -1;
    }

    return times;
}

int InputNum()
{
    int m;
    printf("Please input a number:");
    scanf("%d",&m);

    return m;
}
