//Q119: Write a program to take an integer array as input. Only one element will be repeated. 
//Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>
int main() {
    int n , s;
    printf("Enter the size of array :- ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the sorted elements of array :- ");
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<=n ; j++){
            if(arr[i] == arr[j]){
                printf("%d",arr[i]);
            }
        }
    }
    return 0;
}