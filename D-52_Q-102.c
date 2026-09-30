//Q102: Write a Program to take a sorted array arr[] and an integer x as input, 
//find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it.
//This element is called the ceil of x. If such an element does not exist, print -1.
//Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include<stdio.h>
    int main(){
        int a , i , x , found = -1;
        printf("Enter the size of array :- ");
        scanf("%d",&a);
        int arr[a];
        printf("Enter the elements of array :- ");
        for(i=0 ; i<a ; i++){
            scanf("%d", &arr[i]);
        }
        printf("Enter an element (x) :- ");
        scanf("%d",&x);

        for(i=0 ; i<a ; i++){
            if(arr[i] > x || arr[i] == x){
                found = i;
                break;
            }
        }
        printf("%d",found);
        return 0;
    }