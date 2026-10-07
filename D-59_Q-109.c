//Q109: Write a program to take an integer array arr and an integer k as inputs. 
//Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n) {
        printf("Subarray size k cannot be greater than array size.\n");
        return 0;
    }

    // Step 1: Calculate sum of first k elements
    int window_sum = 0;
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    int max_sum = window_sum;

    // Step 2: Slide the window
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];  // add new, remove old
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    printf("Maximum sum of subarray of size %d is: %d\n", k, max_sum);

    return 0;
}
