//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

#include<stdio.h>
    int main(){
        int a;
        printf("Enter a number :- ");
        scanf("%d",&a);

        switch(a){
            case 1:
            printf("\nJanuary , 31 Days");
            break;

            case 2:
            printf("\nFebruary, 28 Days");
            break;

            case 3:
            printf("\nMarch , 31 Days");
            break;

            case 4:
            printf("\nApril , 30 Days");
            break;

            case 5:
            printf("\nMay , 31 Days");
            break;

            case 6:
            printf("\nJune , 30 Days");
            break;

            case 7:
            printf("\nJuly , 31 Days");
            break;

            case 8:
            printf("\nAugust , 31 Days");
            break;

            case 9:
            printf("\nSeptember , 30 Days");
            break;

            case 10:
            printf("\nOctober , 31 Days");
            break;

            case 11:
            printf("\nNovember , 30 Days");
            break;

            case 12:
            printf("\nDecember , 31 Days");
            break;

            default:
            printf("\nInvalud entry");
            break;
        }
        return 0;
    }