#include <stdio.h>

void insertion_sort(int a[], int n)
{
    int i, j, temp;
    for(i=1; i<n; i++)
    {
        temp=a[i];
        j=i-1;

        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

int main()
{
    int a[5]={43,31,26,29,12};
    int n = 5;

    printf("The original array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n------  INSERTION SORT  ------\n\n");

    insertion_sort(a, n);

    printf("The sorted array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    return 0;
}