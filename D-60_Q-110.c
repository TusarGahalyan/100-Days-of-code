//Q110: Write a program to take an integer array arr and an integer k as inputs. 
//The task is to find the maximum element in each subarray of size k moving from left to right. 
//Print the maximum elements for each window separated by spaces as output.

#include<stdio.h>
    int main(){
        int a , i , k , j ;
        printf("Enter the size of array :- ");
        scanf("%d",&a);

        int arr[a];
        printf("Enter the elements of array :- ");
        for(i=0 ; i<a ; i++){
        scanf("%d",&arr[i]);
        }

        printf("Enter the value of k(size of sub-arrays) :- ");
        scanf("%d",&k);

        for(i=0 ; i<=a-k ; i++){
            int max = arr[i];
            for(j=1 ; j<k ; j++){
                if(arr[i+j] > max){
                    max = arr[i+j];
                }
            }
            printf("%d ", max);
        }
        return 0;
    }
