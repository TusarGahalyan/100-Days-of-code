//Q77: Check if the elements on the diagonal of a matrix are distinct.

#include<stdio.h>
    int main()
    {
         int a , b , i , j , found=0 ;
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
        }
        for(i=0 ; i<a ; i++){
            for(j=i+1 ; j<a ; j++){
                if(diag[i] == diag[j]){
                    found = 1;
                    break;}
                }
            if(found == 1){
                break;
            }
        }
        if(found == 1){
            printf("False\n");
        }
        else{
            printf("True\n");
        }
        return 0;
    }