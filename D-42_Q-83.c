//Q83: Count vowels and consonants in a string.

#include<stdio.h>
    int main()
    {
        int i=0;
        int vowels=0 , consonants=0 ;
        char abc[100];
        printf("Enter the string :- ");
        scanf("%s",abc);

        while(abc[i] != '\0'){
        if(abc[i] == 'a' || abc[i] == 'e' || abc[i] == 'i' || abc[i] == 'o' || abc[i] == 'u' || 
           abc[i] == 'A' || abc[i] == 'E' || abc[i] == 'I' || abc[i] == 'O' || abc[i] == 'U'){
            vowels++;
        }
        else{
            consonants++;
        }i++;
    }
        printf("Vowels :- %d\n",vowels);
        printf("Consonants :- %d\n",consonants);
        return 0;
    }