//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main()
{
    int hours=0, minutes=0, seconds=0;
    int sec;
    printf("Enter the total seconds : ");
    scanf("%d",&sec);

    hours = sec/3600; //There are 3600 seconds in 1 hour
    minutes = (sec % 3600)/60; //We will have to find the seconds left after getting complete hours by % and then we will divide them by 60
    seconds = sec % 60; //The remainder will give us the seconds left which can not be converted in hours and minutes
    printf("\n%d:%d:%d",hours,minutes,seconds);

    return 0;
}