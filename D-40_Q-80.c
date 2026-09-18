//Q80: Multiply two matrices.

#include<stdio.h>
    int main()
    {
        int a, b , c , d , i , j;
        printf("Ente rthe rows and columns of matrix1 :- ");
        scanf("%d%d",&a,&b);

        int arr1[a][b];
        printf("Eter the elements of matrix1 :- ");
        for(i=0 ; i<a ; i++){
            for(j=0 ; j<b ; j++){
                scanf("%d",&arr1[i][j]);
            }
        }

        printf("Ente rthe rows and columns of matrix2 :- ");
        scanf("%d%d",&c,&d);

        if(c!=b){
            printf("Matrix2 should have rows equal to matrix1\n");
            return 0;
        }
        int arr2[c][d];
        printf("Eter the elements of matrix2 :- ");
        for(i=0 ; i<c ; i++){
            for(j=0 ; j<d ; j++){
                scanf("%d",&arr2[i][j]);
            }
        }
        int arr3[a][d];
        for(i=0 ; i<a ; i++){
            for(j=0 ; j<d ; j++){
                arr3[i][j]=0;
            }
        }
        int k;
        for(i=0 ; i<a ; i++){
            for(j=0 ; j<d ; j++){
                for(k=0 ; k<b ; k++){
                    arr3[i][j] = arr3[i][j] + arr1[i][k]*arr2[k][j];
                }
            }
        }        
        for(i=0 ; i<a ; i++){
            for(j=0 ; j<d ; j++){
                printf("%d ",arr3[i][j]);
            }printf("\n");
        }
    }
