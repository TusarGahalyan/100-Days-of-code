//Q39: Write a program to find the product of odd digits of a number.

#include<stdio.h>
    int main()
    {
        int a , foundOdd=0 , product=1 , digit;
        printf("Enter a number :- ");
        scanf("%d",&a);

        while(a!=0)
        {
        digit = a%10;
        if(digit%2 != 0)
        {
            product *= digit;
            foundOdd = 1;
        }
        a = a/10;
        }
        if(foundOdd)
        {
        printf("%d",product);
        }
        else
        {
            printf("\nNo odd digit found");
        }
        return 0;

    }