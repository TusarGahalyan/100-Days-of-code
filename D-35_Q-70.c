//Q70: Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int n, k, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (positions to rotate): ");
    scanf("%d", &k);

    // Normalize k in case it's larger than n
    k = k % n;

    printf("Array after rotation: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[(n - k + i) % n]);
    }

    return 0;
}