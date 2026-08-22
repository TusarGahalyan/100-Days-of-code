//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include<stdio.h>
    int main()
    {
        int a , b;
        char op;
        printf("Enter the values of a and b :- ");
        scanf("%d%d",&a,&b);

        printf("\nEnter the operator :- ");
        scanf(" %c",&op);

        switch(op)
        {
            case '+':
            printf("\n%d",a+b);
            break;

            case '-':
            printf("\n%d",a-b);
            break;

            case '*':
            printf("\n%d",a*b);
            break;

            case '/':
            printf("\n%d",a/b);
            break;

            case '%':
            printf("\n%d",a%b);
            break;

            default:
            printf("\nInvalid operator");
            break;

        }

        return 0;
        
    }