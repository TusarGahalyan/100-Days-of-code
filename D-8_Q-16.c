//Q16: Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>
    int main()
    {
        int a, b, c;
        printf("Enter any three numbers :- ");
        scanf("%d%d%d",&a,&b,&c);

        if(a>b && a>c)
        {
            printf("\n%d is largest",a);
        }
        else if(b>a && b>c)
        {
            printf("\n%d is largest",b);
        }
        else
        {
            printf("\n%d is largest",c);
        }
        return 0;
    }