//Q118: Write a program to take an input array of size n. 
//The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>
int main() {
    int n , s;
    printf("Enter the size of array1 :- ");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the sorted elements of array1 :- ");
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr1[i]);
    }
    int i=0 ;
    while(i<n){
        if(arr1[i]!=i){
            printf("%d",i);
            break;
        }i++;
    }
    if(i==n){
        printf("%d",i);
    }
    return 0;
}