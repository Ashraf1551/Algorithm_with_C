#include<stdio.h>
int main()
{
    int a[100]={3,5,8,7,4,2,9}, i, s_data, count=0;

    printf("Enter the searched data: ");
    scanf("%d", &s_data);//50

    for(i=0; i<7; i++)
    {
        if(a[i]==s_data)
        {
            printf("found at index %d\n\n\n", i);
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("Not found\n\n\n");
    }
    return 0;
}
