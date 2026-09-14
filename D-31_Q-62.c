//Q62: Reverse an array without taking extra space.

#include<stdio.h>
    int main()
    {
        int a , i , j , temp=0;
        printf("Enter the size of array :- ");
        scanf("%d",&a);

        int arr[a];
        printf("Enter elements of array :- ");
        for(i=0 ; i<a ; i++){
        scanf("%d",&arr[i]);}

        j=i-1;
        for(i=0 ; i<j ; i++ , j--){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        for(i=0 ; i<a ; i++){
        printf("%d ",arr[i]);}
        return 0;
    }
