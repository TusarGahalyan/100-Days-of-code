/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

*/

#include<stdio.h>
    int main()
    {
        int n=10 , i , j ;

        for(i=1 ; i<n ; i++){
            if(i%2 != 0){
            for(j=1 ; j<=i ; j++)
            {
                printf("*");
            }
            printf("\n");}}

            for(i=n-2 ; i>=1 ; i--){
                if(i%2 != 0){
                for(j=1 ; j<=i ; j++)
                {
                    printf("*");
                }
                printf("\n");}}
            return 0;
    }