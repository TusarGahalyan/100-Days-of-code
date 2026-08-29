//Q40: Write a program to find the 1’s complement of a binary number and print it.

#include<stdio.h>
    int main()
    {
        int a ;
        char binary[100];
        printf("Enter an binary number :-");
        scanf("%s",binary);
        
        printf("1's complement :- ");
        for(a = 0 ; binary[a]!='\0' ; a++)
        {
            if(binary[a] == '0')
            {
                printf("1");
            }
            else
            {
                printf("0");
            }

        }
        return 0;

    }