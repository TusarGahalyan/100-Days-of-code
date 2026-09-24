//Q94: Find the longest word in a sentence.

#include <stdio.h>
int main() {
    char str[200];
    int i = 0, len = 0, maxLen = 0, start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            if (len == 0) start = i;   // mark start of word
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
        }
        i++;
    }

    // print longest word
    for (i = 0; i < maxLen; i++)
        putchar(str[maxStart + i]);

    return 0;
}
