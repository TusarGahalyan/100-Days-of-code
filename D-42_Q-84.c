//Q84: Convert a lowercase string to uppercase without using built-in functions.

#include<stdio.h>
    int main()
    {
        int i=0;
        char abc[100];
        printf("Enter the string :- ");
        scanf("%s",abc);

        while(abc[i] != '\0'){
            if(abc[i] >= 'a' && abc[i] <= 'z'){
                abc[i] = abc[i]-32;
            }i++;
        }
        printf("%s",abc);
        return 0;
    }