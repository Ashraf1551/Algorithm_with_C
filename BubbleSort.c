#include <stdio.h>

void bubble_sort(int *a, int n)
{
    int i, j, cnt, temp;
    for (i = 0; i < n - 1; i++)
    {
        cnt = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                cnt++;
            }
        }
        if (!cnt)
            break;
    }
}

int main()
{
    int a[10] = {19, 17, 15, 13, 11, 9, 7, 5, 3, 1};
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
