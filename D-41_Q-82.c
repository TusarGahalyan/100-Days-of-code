//Q82: Print each character of a string on a new line.

#include<stdio.h>
    int main()
    {
        int i=0;
        char abc[100];
        printf("Enter the string :- ");
        scanf("%s",abc);

        while(abc[i] != '\0'){
            printf("%c\n",abc[i]);
            i++;
        }
        return 0;
    }