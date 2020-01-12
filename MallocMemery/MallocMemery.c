#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h> //memset()方法

/*
    随机产生n个1000以内的数字，并从小到大排序，n由用户输入
*/

int GetUserNum();
int GenerateNums(int arr[],int size);
int SelectSort(int* parr,int size);
int StdPrint(int* p,int size);

int main()
{
    int num = 0;
    int* pint = NULL;
    num = GetUserNum();
    pint = (int*)malloc(num * sizeof(int));
    memset(pint,0,num); //初始化动态申请内存的值
    GenerateNums(pint,num); //产生随机数
    SelectSort(pint,num); //选择排序
    StdPrint(pint,num); //格式化输出
    free(pint); //释放堆区内粗
    pint = NULL;

    return 0;
}

int GetUserNum() //用户输入
{
    int m = 0;
    printf("Please input an amount:\n");
    scanf("%d",&m);
    while(getchar() != '\n')
    {

    }
    return m;
}

int GenerateNums(int arr[],int size) //产生随机数
{
    int i = 0;
    int* p = arr;
    for(;i<size;i++)
    {
        p[i] = rand()%1000;
    }
    return 0;
}

int SelectSort(int* parr,int size)
{
    if(NULL == parr || size < 0)
    {
        return -1;
    }

    int i = 0;
    int j = 0;
    int min = 0;
    for(;i<size-1;i++)
    {
        min = i;
        for(j=i+1;j<size;j++)
        {
            if(parr[min]>parr[j])
            {
                min = j;
            }
        }
        if(min>i)
        {
            int temp = 0;
            temp = parr[i];
            parr[i] = parr[min];
            parr[min] = temp;
        }
    }
    return 0;
}

int StdPrint(int* p,int size)
{
    int i = 0;
    for(;i<size;i++)
    {
        if(i%10 == 0 && i > 0)
        {
            printf("\n");
        }
        printf("%4d",p[i]);
    }
    printf("\n");
    return 0;
}











