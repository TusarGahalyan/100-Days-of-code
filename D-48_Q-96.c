//Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int i = 0, j;
    while(str[i] != '\0') {
        if(str[i] != ' ' && str[i] != '\n') {
            j = i;
            while(str[j] != ' ' && str[j] != '\0' && str[j] != '\n'){
                j++;
            }
            for(int k = j-1; k >= i; k--){
                printf("%c", str[k]); 
            }
            if(str[j] == ' '){
                printf(" ");
            }
            i = j;
        } else i++;
    }
    return 0;
}
