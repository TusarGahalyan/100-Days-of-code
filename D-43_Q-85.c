//Q85: Reverse a string.

#include<stdio.h>
int main()
{
    int i , j , size=0;
    char abc[100] , temp;
    printf("Enter a string :- ");
    scanf("%s",abc);

    while(abc[size] != '\0'){
        size++;
    }
    j = size-1;
    for(i=0 ; i<j ; i++ , j--){
        temp = abc[i];
        abc[i] = abc[j];
        abc[j] = temp;
    }
    printf("%s",abc);
    return 0;
}