//Q86: Check if a string is a palindrome.

#include<stdio.h>
    int main()
    {
        int i , j;
        char abc[100] , size;
        printf("Enter a string :- ");
        scanf("%s",abc);

        while (abc[size] != '\0'){
            size++;
        }

        for (i = 0, j = size - 1; i < j; i++, j--){
            if (abc[i] != abc[j]) {
                printf("Not palindrome\n");
                return 0;  
            }
        }

        printf("Palindrome\n");
        return 0;
        }