//Q120: Write a program to take a string input. Change it to sentence case.

#include<stdio.h>
#include<string.h>
    int main(){
        char str[100];
        printf("Enter the string :- ");
        fgets(str , sizeof(str) , stdin);

        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + 32;
            }
        }

        if(str[0] >= 'a' && str[0] <= 'z'){
            str[0] = str[0] - 32;
        }
        for(int i=0 ; str[i] != '\0' ; i++){
            if(str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z') {
                str[i+1] = str[i+1] - 32;
            }
        }
        printf("%s",str);
        return 0;
    } 