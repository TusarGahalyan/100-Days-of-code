//Q112: Write a program to take an integer array arr as input. 
//The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. 
//Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of array :- ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of array :- ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int currSum = 0;
    int maxSum = arr[0];
    for(int i = 0; i < n; i++){
        currSum += arr[i];

        if(currSum > maxSum){
            maxSum = currSum;
        }

        if(currSum < 0){
            currSum = 0;
        }
    }
    printf("%d", maxSum);
    return 0;
}