//Q74: Find the transpose of a matrix.

#include<stdio.h>
    int main()
    {
        int a , b , i , j ;
        printf("Enter the number of rows and columns of matrix :- ");
        scanf("%d %d",&a,&b);

        int arr[a][b];
        printf("Enter the elements of matrix :- ");
        for(i=0 ; i<a ; i++){
            for(j=0 ; j<b ; j++){
                scanf("%d",&arr[i][j]);
            }
        }
        int trnspos[b][a];
        for(i=0 ; i<a ; i++){
            for(j=0 ; j<b ; j++){
                trnspos[j][i]=arr[i][j];
            }
        }
        printf("Transpose of matrix :- \n");
        for(i=0 ; i<b ; i++){
            for(j=0 ; j<a ; j++){
                printf("%d ",trnspos[i][j]);
            }printf("\n");
        }
    }