//Q117: Write a program to take two sorted arrays of size m and n as input. 
//Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>
int main() {
    int m , n , s;
    printf("Enter the size of array1 :- ");
    scanf("%d",&m);
    int arr1[m];
    printf("Enter the sorted elements of array1 :- ");
    for(int i = 0; i<m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of array1 :- ");
    scanf("%d",&n);
    int arr2[n];
    printf("Enter the sorted elements of array2 :- ");
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr2[i]);
    }
    int arr3[m+n];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < m) {
        arr3[k++] = arr1[i++];
    }
    while (j < n) {
        arr3[k++] = arr2[j++];
    }
    printf("The sorted array is :- ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", arr3[i]);
    }
    return 0 ;
}