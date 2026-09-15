//Q73: Find the sum of each row of a matrix and store it in an array.

#include<stdio.h>
    int main()
    {
        int a , b , i , j , sum=0;
        printf("Enter the number of rows and columns of matrix :- ");
        scanf("%d %d",&a,&b);

        int arr[a][b];
        printf("Enter the elements of matrix :- ");
        for(i=0 ; i<a ; i++){
            for(j=0 ; j<b ; j++){
                scanf("%d",&arr[i][j]);
            }
        }
        int rowsum[a];

        for(i=0 ; i<a ; i++){
            sum = 0;
            for(j=0 ; j<b ; j++){
                sum = sum+arr[i][j];
            }rowsum[i] = sum;
        }
        printf("Sum of row of a matrix :- ");
        for(i=0 ; i<a ; i++){
            printf("%d ",rowsum[i]);
        }
        return 0;
    }