//Q114: Write a program to take a string s as input. 
//The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
int main() {
    char s[100];
    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);

    int maxLen = 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        int freq[256] = {0};
        for (int j = i; s[j] != '\0' && s[j] != '\n'; j++) {
            if (freq[(unsigned char)s[j]] == 1)
                break;
            freq[(unsigned char)s[j]] = 1;
            int len = j - i + 1;
            if (len > maxLen)
                maxLen = len;
        }
    }
    printf("%d", maxLen);
    return 0;
}