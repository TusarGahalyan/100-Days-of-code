//Q38: Write a program to find the sum of digits of a number.

#include<stdio.h>
    int main()
    {
        int a , sum=0 , rem ;

        printf("Enter the value of a :- ");
        scanf("%d",&a);

        while(a!=0)
        {
            rem=a%10;
            sum=sum+rem;
            a=a/10;
        }
        printf("%d is the sum of digits of the entered number",sum);

        return 0;

    }
