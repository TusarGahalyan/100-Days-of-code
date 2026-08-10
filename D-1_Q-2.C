//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
    int main()
    {
        int a , b , sum , difference , product , quotient;
        printf("Enter two numbers :- \n");
        scanf("%d%d",&a,&b);

        sum=a+b;
        printf("The sum of the numbers is = %d\n",sum);

        difference = a-b;
        printf("The difference of the numbers is = %d\n",difference);

        product = a*b;
        printf("The product of the numbers is = %d\n",product);

        quotient = a/b;
        printf("The quotient of the numbers is = %d\n",quotient);

        return 0;


    }