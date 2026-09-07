//Q57: Find the sum of array elements.

#include<stdio.h>
    int main()
    {
        int i , sum=0 , a;

        printf("Enter the size of array :- ");
        scanf("%d",&a);

        int arr[a];
        printf("Enter the values of arrays :- ");

        for(i=0 ; i<a ; i++)
        {
            scanf("%d",&arr[i]);//enter values of elements

        }
        printf("These are the values of array elements :- ");

        for(i=0 ; i<a ; i++)
        {
        printf(" %d ",arr[i]);//print array elements
        }
        printf("\nThis is the sum of array elements :- ");

        for(i=0 ; i<a ; i++)
        {
        sum = sum+arr[i];//sum of array elements
        }
        printf("%d",sum);
    

    return 0;
    }