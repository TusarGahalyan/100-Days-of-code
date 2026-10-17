///Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). 
//The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. 
//Print "Anagram" if they are, otherwise "Not Anagram".

#include<stdio.h>
    int main(){
        char s[100];
        printf("Enter the string (in lower case): ");
        fgets(s, sizeof(s), stdin);

        char t[100];
        printf("Enter the string (in lower case): ");
        fgets(t, sizeof(t), stdin);

        s[strcspn(s, "\n")] = '\0';
        t[strcspn(t, "\n")] = '\0';

        int freq[26] = {0};
        int i;
        for(i = 0; s[i] != '\0'; i++) {
            freq[s[i] - 'a']++;
        }
        for(i = 0; t[i] != '\0'; i++) {
            freq[t[i] - 'a']--;
        }
        int flag = 1;
        for(i = 0; i < 26; i++) {
            if(freq[i] != 0) {
                flag = 0;
                break;
            }
        }
        if(flag == 1) {
            printf("Anagram");
        }
        else {
            printf("Not Anagram");
        }
        return 0;
        }