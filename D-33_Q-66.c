//Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() 
{
    int a, i, element, position;
    printf("Enter size: ");
    scanf("%d", &a);

    int arr[a+1];   
    printf("Enter sorted elements: ");
    for(i=0; i<a; i++) {
        scanf("%d", &arr[i]);}

    printf("Enter element to insert: ");
    scanf("%d", &element);

    position = a;
    for(i=0; i<a; i++) {
        if(arr[i] > element) { 
            position = i; 
            break;}}

    for(i=a; i>position; i--) {
        arr[i] = arr[i-1];}

    arr[position] = element;
    a++;

    printf("Array after insertion: ");
    for(i=0; i<a; i++) {
        printf("%d ", arr[i]);}

    return 0;
}
