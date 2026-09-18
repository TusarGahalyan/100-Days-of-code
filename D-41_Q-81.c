//Q81: Count characters in a string without using built-in length functions.

#include<stdio.h>
    int main()
    {
        int count=0;
        char abc[100];
        printf("Enter the string :- ");
        scanf("%s",abc);
        
        while(abc[count] != '\0'){
            count++;
        }
        printf("%d",count);
        return 0;
    }