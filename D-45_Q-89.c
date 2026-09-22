//Q89: Count frequency of a given character in a string.

#include<stdio.h>
    int main()
    {
        int i , count=0;
        char abc[100] , character;
        printf("Enter the string :- ");
        scanf("%s",abc);

        printf("Enter the character :- ");
        scanf(" %c",&character);
        i=0;
        while(abc[i] != '\0'){
            if(abc[i] == character){
                count++;
            }i++;
        }
        printf("%d",count);
        return 0;
    }