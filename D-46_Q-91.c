//Q91: Remove all vowels from a string.

#include<stdio.h>
    int main()
    {
        int i=0 , j;
        char abc[100];
        printf("Enter a string :- ");
        scanf("%s",abc);

        while(abc[i] != '\0'){
            if(abc[i] == 'a' || abc[i] == 'e' || abc[i] == 'i' || abc[i] == 'o' || abc[i] == 'u' || 
            abc[i] == 'A' || abc[i] == 'E' || abc[i] == 'I' || abc[i] == 'O' || abc[i] == 'U'){
                
                j=i;
                while(abc[j] != '\0'){
                    abc[j] = abc[j+1];
                    j++;
                }
            }
            else{
                i++;
            }
        }
        printf("%s",abc);
        return 0;
    }
