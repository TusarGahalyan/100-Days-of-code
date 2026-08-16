//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>
    int main()
    {
        int a ;
        printf("Emte ra year :- ");
        scanf("%d",&a);

        if(a%400==0)
        {
            printf("\nIt is a leap year ");
        }
        else if(a%100==0)
        {
            printf("\nIt is not a leap year ");
        }
        else if(a%4==0)
        {
            printf("\nIt is a leap year ");
        }
        else
        {
            printf("\nIt is not a leap year ");
        }
        return 0;
    }