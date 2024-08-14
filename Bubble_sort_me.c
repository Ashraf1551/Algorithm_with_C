#include <stdio.h>

void bubble_sort(int a[], int n)
{
    int i, j, temp, flag;
    for (i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag++;
            }
        }
        if (flag == 1)
            break;
    }
}

int main()
{
    int a[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = 10;

    printf("The original array is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    bubble_sort(a, n);

    printf("The sorted array is: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
