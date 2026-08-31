//Q43: Write a program to check if a number is a strong number.

#include<stdio.h>
    int main()
    {
        int a , sum=0 , original , rem , fact , i ;
        printf("Enter the value of a :- ");
        scanf("%d",&a);

        original = a;
        while(a!=0)
        {
            rem = a%10;
            fact = 1;

            for(i=1 ; i<=rem ; i++)
            {
                fact = fact*i;
            }
            sum = sum+fact;
            a = a/10;
        }
        if(sum == original)
        {
            printf("\nStrong number");
        }
        else
        {
            printf("\nNot strong number");
        }
        return 0;


    }
