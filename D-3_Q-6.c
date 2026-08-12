//Q6: Write a program to swap two numbers using a third variable.

#include<stdio.h>
    int main()
    {
        int a , b , c;

        printf("Enter the value of a and b ");
        scanf("%d %d\n",&a,&b);

        printf("Following are the values before swapping :- \n");
        printf("a = %d\n",a);
        printf("b = %d\n",b);

        c = a;
        a = b;
        b = c;

        printf("Following are the values after swapping :- \n");
        printf("a = %d\n",a);
        printf("b = %d\n",b);

        return 0;

    }