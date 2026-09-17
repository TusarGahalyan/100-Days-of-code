//Q78: Find the sum of main diagonal elements for a square matrix.

#include<stdio.h>
    int main()
    {
         int a , b , i , j , sum=0;
        printf("Enter the number of rows and columns of matrix(Rows and Columns should be equal) :- ");
        scanf("%d %d",&a,&b);

        int arr[a][b];
        printf("Enter the elements of matrix :- ");
        for(i=0 ; i<a ; i++){
            for(j=0 ; j<b ; j++){
                scanf("%d",&arr[i][j]);
            }
        }

        int diag[a];
        for(i=0 ; i<a ; i++){
            diag[i] = arr[i][i];
            sum = sum+diag[i];
        }
        
        printf("%d is the sum of diagonal elements",sum);

        return 0;
    }
        