#include <stdio.h>

int binary_search(int a[], int n, int data)
{
    int l, r, mid;
    l=0, r=n-1;
    
    while(l<=r)
    {
        mid=(l+r)/2;

        if(data==a[mid])
        return mid;

        else if(data>a[mid])
        l=mid+1;

        else
        r=mid-1;
    }
    return -1;
}

int main()
{
    int a[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    // Use sizeof to find the size of the array
    int size = sizeof(a) / sizeof(a[0]);
    int data;
    int result;

    printf("Enter the data to search for: ");
    scanf("%d", &data);

    result = binary_search(a, size, data);

    if (result == -1)
    {
        printf("The data %d is not found in the array\n", data);
    }
    else
    {
        printf("The data %d is found at index %d\n", data, result);
    }

    return 0;
}
