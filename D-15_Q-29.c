//Q29: Write a program to calculate the factorial of a number.

#include<stdio.h>
    int main()
    {
        int a , i , fct=1;
        printf("Enter the value of a :- ");
        scanf("%d",&a);

        for(i=1 ; i<=a ; i++)
        {
            fct=fct*i;
        }
        printf("\n%d",fct);

        return 0;
    }