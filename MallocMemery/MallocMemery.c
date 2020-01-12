#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h> //memset()����

/*
    �������n��1000���ڵ����֣�����С��������n���û�����
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
    memset(pint,0,num); //��ʼ����̬�����ڴ��ֵ
    GenerateNums(pint,num); //���������
    SelectSort(pint,num); //ѡ������
    StdPrint(pint,num); //��ʽ�����
    free(pint); //�ͷŶ����ڴ�
    pint = NULL;

    return 0;
}

int GetUserNum() //�û�����
{
    int m = 0;
    printf("Please input an amount:\n");
    scanf("%d",&m);
    while(getchar() != '\n')
    {

    }
    return m;
}

int GenerateNums(int arr[],int size) //���������
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











