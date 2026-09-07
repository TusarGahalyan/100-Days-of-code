//Q58: Find the maximum and minimum element in an array.

#include <stdio.h>

int main() {
    
    int i , a , max , min;
    printf("Enter the size of array :- ");
    scanf("%d",&a);

    int arr[a];
    printf("Enter elements of array :- ");
    for(i = 0; i < a; i++) 
    {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];   

    for(i = 1; i < a; i++)
     {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    printf("Max = %d\nMin = %d\n", max, min);
    return 0;
}