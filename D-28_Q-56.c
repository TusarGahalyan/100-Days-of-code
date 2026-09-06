//Q56: Read and print elements of a one-dimensional array.

#include<stdio.h>
    int main()
    {
        int i;
        int a;
        printf("Enter the size of array :- ");
        scanf("%d",&a);

        int arr[a];
        printf("Enter the values of array elements :- ");

        for(i=0 ; i<a ; i++)
        {
            scanf("%d",&arr[i]);

        }
        printf("Elements of array are :- \n");
        for(i=0 ; i<a ; i++)
        {
        printf(" %d",arr[i]);
        }
        
        return 0;
    }