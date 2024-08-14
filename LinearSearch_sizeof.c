#include <stdio.h>

int main() {
    int a[] = {3, 5, 8, 7, 4, 2, 9}, i, s_data, found = 0;
    int array_length = sizeof(a) / sizeof(a[0]); // Calculate the length of the array

    printf("Enter the searched data: ");
    scanf("%d", &s_data);

    for (i = 0; i < array_length; i++) {
        if (a[i] == s_data) {
            printf("Found at index %d", i);
            found++;
            break;
        }
    }

    if (found == 0) {
        printf("Not found");
    }

    return 0;
}
