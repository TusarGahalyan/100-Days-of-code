//Q71: Read and print a matrix.

#include<stdio.h>
    int main()
    {
        int a , b , i , j;
        printf("Enter the number of rows and columns of matrix :- ");
        scanf("%d%d",&a,&b);

        int arr[a][b];
        printf("Enter the elements of matrix :- ");
        for(i=0 ; i<a ; i++){
            for(j=0 ; j<b ; j++){
                scanf("%d",&arr[i][j]);
            }
        }
        for(i=0 ; i<a ; i++){
            for(j=0 ; j<b ; j++){
        printf("%d ",arr[i][j]);
            }printf("\n");
        }
        return 0 ;
    }