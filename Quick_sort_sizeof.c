#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int l, int h)
{
    int pivot = a[l];
    int i = l;
    int j = h;

    while (i < j)
    {
        while (a[i] <= pivot && i < h)
        {
            i++;
        }
        while (a[j] > pivot && j > l)
        {
            j--;
        }
        if (i < j)
        {
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[l], &a[j]);
    return j;
}

void quick_sort(int a[], int l, int h)
{
    if (l < h)
    {
        int j = partition(a, l, h);
        quick_sort(a, l, j - 1);
        quick_sort(a, j + 1, h);
    }
}

void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[] = {9, 4, 3, 1, 15, 20, 2, 24, 30, 11, 35};
    // Use sizeof to find the size of the array
    int size = sizeof(a) / sizeof(a[0]);
    printf("Unsorted array: ");
    print_array(a, size);
    quick_sort(a, 0, size - 1);
    printf("Sorted array: ");
    print_array(a, size);
    return 0;
}
