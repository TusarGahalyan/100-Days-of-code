//Q76: Check if a matrix is symmetric.
//A matrix is symmetric when the transpose is same as original matrix

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

        if(trnspos[i][j] == arr[i][j]){
            printf("The matrix is symmetric");
        }
        else{
            printf("The matrix is not symmetric");
        }

        return 0;
    }