//Q42: Write a program to check if a number is a perfect number.

#include<stdio.h>
    int main()
    {
        int a , i , sum=0 ;
        printf("Enter a number :- ");
        scanf("%d",&a);

        for(i=1 ; i<=a/2 ; i++)
        {
            if(a%i == 0)
            {
                sum=sum+i;
            }
        }
            if(sum == a)
            {
                printf("\nPerfect number");
            }
            else
            {
                printf("\nNot perfect number");
            }
            return 0 ;
        
    }