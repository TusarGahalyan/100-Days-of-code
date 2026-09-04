/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*


*/

#include<stdio.h>
    int main()
    {
        int i , j ;

        for(i=1 ; i<=5 ; i++)
        {
            for(j=1 ; j<=5 ; j++)
            {
                if((i==1 || i==5) && j<=1)
                {
                    printf("*\n");
                }
                else if((i==2 || i==4) && j<=3)
                {
                    printf("*\n");
                }
                else if(i==3 && j<= 5)
                {
                    printf("*\n");
                }
            }
            if(i!=5)
            {
                printf("\n");
            }
        }
        return 0;
    }
