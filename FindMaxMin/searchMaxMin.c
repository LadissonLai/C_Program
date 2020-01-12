#include<stdio.h>

int FindMaxMin(double arr[],int size, double* outmax, double *outmin);
int main()
{
    double arr[5] = {1.0d,2.0d,3.0d,4.0d,5.0d};
    double max = 0.0;
    double min = 0.0;
    FindMaxMin(arr, 5, &max, &min);

    printf("The max and min is %.1f and %.1f.\n",max,min);

    return 0;
}

int FindMaxMin(double arr[],int size, double* outmax, double *outmin)
{
    int i = 0;
    for(i=0; i<size; i++)
    {
        if(*outmax < arr[i])
        {
            *outmax = arr[i];
        }
    }

    for(i=0; i<size; i++)
    {
        if(*outmin > arr[i])
        {
            *outmin = arr[i];
        }
    }

    return 0;
}
