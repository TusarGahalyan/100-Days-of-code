//Q75: Add two matrices.

#include<stdio.h>
    int main()
    {
        int a , b , c , d , e , f , i , j , m , n , sum=0;
        printf("Enter the rows and columns of first matrix :- ");
        scanf("%d %d",&a,&b);

        int arr1[a][b];
        printf("Enter the elements of first matrix :- ");
        for(i=0 ; i<a ; i++){
            for(j=0 ; j<b ; j++){
                scanf("%d",&arr1[i][j]);
            }}  
            
        printf("Enter the rows and columns of second matrix :- ");
        scanf("%d %d",&c,&d);

        int arr2[c][d];
        printf("Enter the elements of first matrix :- ");
        for(i=0 ; i<c ; i++){
            for(j=0 ; j<d ; j++){
                scanf("%d",&arr2[i][j]);
            }}

        e=a;
        f=b;
        int arr3[e][f];
        for(i=0 ; i<e ; i++){
            for(j=0 ; j<f ; j++){
                arr3[i][j] = arr1[i][j] + arr2[i][j];
            }}
        printf("Sum of two matrices :- \n");
        for(i=0 ; i<e ; i++){
            for(j=0 ; j<f ; j++){
                printf("%d ",arr3[i][j]);
            }printf("\n");
        }
            
            return 0;
    }