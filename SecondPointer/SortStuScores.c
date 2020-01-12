#include<stdio.h>

#define N 3
#define M 5
void SortByFirstSubject(int* stus[],int sizeM);
int main()
{
    int stu1[N] = {78,89,65};
    int stu2[N] = {88,89,65};
    int stu3[N] = {68,89,65};
    int stu4[N] = {98,89,65};
    int stu5[N] = {58,89,65};
    int i = 0;
    int j = 0;

    int* students[M] = {stu1,stu2,stu3,stu4,stu5};

    SortByFirstSubject(students,M);
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d ",students[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void SortByFirstSubject(int* stus[],int sizeM)
{
    int i = 0;
    int j = 0;
    int** p = stus;
    int* ptemp = NULL;

    for(i=0;i<sizeM-1;i++)
    {
        for(j=0;j<sizeM-i-1;j++)
        {
            if(**(p+j) > **(p+j+1))
            {
                ptemp = p[j];
                p[j] = p[j+1];
                p[j+1] = ptemp;
            }
        }
    }

}
