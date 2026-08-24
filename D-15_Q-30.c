//Q30: Write a program to reverse a given number.

#include<stdio.h>
    int main()
    {
        int a , i , rem , rev=0 ;
        printf("Enter the value of a :- ");
        scanf("%d",&a);

        while(a!=0)
        {
            rem = a%10;
            rev = rev*10+rem;
            a=a/10;
        }
        printf("\n%d",rev);

        return 0;
    }