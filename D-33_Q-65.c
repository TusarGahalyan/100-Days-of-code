//Q65: Search in a sorted array using binary search.

#include <stdio.h>

int main() {
    int a, element, i, low, high, mid;    //i am using low and high for index representation
    printf("Enter the size of array :-");
    scanf("%d", &a);
             
    int arr[a];
    printf("Enter the sorted elements :-");
    for (i = 0; i < a; i++){  
        scanf("%d", &arr[i]);}

    printf("Enter the element to search :-");
    scanf("%d", &element);       

    low = 0; high = a - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == element) {
            printf("Found at index %d", mid);
            return 0;
        }
        else if (arr[mid] < element)
            low = mid + 1;
        else
            high = mid - 1;
    }
    printf("-1");   
    return 0;
}
