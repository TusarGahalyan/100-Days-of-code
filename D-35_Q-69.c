//Q69: Find the second largest element in an array.

#include<stdio.h>
    int main()
    {
        int a , i , largest;
        printf("Enter the size of array :- ");
        scanf("%d",&a);

        int arr[a];
        printf("Enter the elements of array :- ");
        for(i=0 ; i<a ; i++) {
        scanf("%d",&arr[i]); }
        
        largest = arr[0];
        for(i=0 ; i<a ; i++) {
            if(arr[i] > largest) {
                largest=arr[i];
            }
        }
        int second = -1;
        for(i=0 ; i<a ; i++) {
            if(arr[i]!=largest && arr[i]>second) {
                second=arr[i];
            }
        }
        printf("Second largest element :- %d",second);
        return 0;
    }