//Q133: Create an enum for months and print how many days each month has.

#include <stdio.h>
enum Months
{
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};
int main()
{
    enum Months m;
    printf("Enter month number (1-12): ");
    scanf("%d", &m);
    switch(m)
    {
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("31 days");
            break;

        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days");
            break;

        case FEB:
            printf("28 or 29 days");
            break;

        default:
            printf("Invalid month");
    }

    return 0;
}