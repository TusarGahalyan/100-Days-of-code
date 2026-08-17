//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include<stdio.h>
    int main()
    {
        char i;
        
        printf("Enter any alphabet or digit or special character :- ");
        scanf("%c",&i);

        if(i=='a')
        {
            printf("\nLowercase character");
        }
        else if(i=='A')
        {
            printf("\nUppercase character");
        }

        else if(i>='0' && i<='9')
        {
            printf("\nDigit");
        }
        else
        {
            printf("\nSpecial character");
        }
        return 0;

    }
    