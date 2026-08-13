//Q8: Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>
int main()
{
    int n , sum=0;
    printf("Enter the value of n(i.e. the first natural numbers that you want to add) : \n");
    scanf("%d",&n);

    sum = n*(n+1)/2;

    printf("\nThe sum of n natural numbers is = %d",sum);

    return 0;

}