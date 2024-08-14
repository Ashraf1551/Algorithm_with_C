#include <stdio.h>

void merge(int a[], int l, int mid, int h) {
    int i = l;
    int j = mid + 1;
    int k = l;
    int temp[h + 1];

    while (i <= mid && j <= h) {
        if (a[i] <= a[j]) {
            temp[k] = a[i];
            i++;
            k++;
        } else {
            temp[k] = a[j];
            j++;
            k++;
        }
    }
    if (i > mid) {
        while (j <= h) {
            temp[k] = a[j];
            j++;
            k++;
        }
    } else {
        while (i <= mid) {
            temp[k] = a[i];
            i++;
            k++;
        }
    }
    for (k = l; k <= h; k++) {
        a[k] = temp[k];
    }
}

void merge_sort(int a[], int l, int h) {
    if (l < h) {
        int mid = (l + h) / 2;
        merge_sort(a, l, mid);
        merge_sort(a, mid + 1, h);
        merge(a, l, mid, h);
    }
}

void print_array(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[7] = {4, 1, 20, 13, 11, 9, 5};
    int n = 7;
    printf("Unsorted array: ");
    print_array(a, n);
    merge_sort(a, 0, n - 1);
    printf("Sorted array: ");
    print_array(a, n);
    return 0;
}
