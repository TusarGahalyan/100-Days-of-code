//Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    printf("Binary: ");
    while (num > 0) {
        printf("%d", num % 2);
        num = num / 2;
    }
    printf("\n");
    return 0;
}