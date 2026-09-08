//Q62: Reverse an array without taking extra space.

#include<stdio.h>
    int main()
    {
        int a , i , temp=0;
        printf("Enter the size of array :- ");
        scanf("%d",&a);

        int arr[a];
        printf("Enter the elements of array :- ");
        for(i=0 ; i<a ; i++)
        {
        scanf("%d",&arr[i]);
        }
        for(i=0 ; i<a/2 ; i++)
        {
            temp=arr[i];
            arr[i]=arr[a-1-i];
            arr[a-1-i]=temp;
        }
        printf("After reversing :- ");
        for(i=0 ; i<a ; i++)
        {
            printf("%d",arr[i]);
        }
        return 0;

    }