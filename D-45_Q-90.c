//Q90: Toggle case of each character in a string.

#include<stdio.h>
    int main()
    {
        int i;
        char abc[100];
        printf("Enter the string :- ");
        scanf("%s",abc);

        for(i=0 ; abc[i] != '\0' ; i++){
            if(abc[i] >= 'a' && abc[i] <= 'z'){
                abc[i] = abc[i]-32;
            }
            else if(abc[i] >= 'A' && abc[i] <= 'Z'){
                abc[i] = abc[i]+32;
            }
        }
        printf("%s",abc);
        return 0;
    }