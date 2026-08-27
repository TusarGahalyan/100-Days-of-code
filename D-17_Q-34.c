//Q34: Write a program to check if a number is prime.

#include<stdio.h>
#include<math.h>

    int main()
    {
        int a , i ;
        printf("Enter the value of a :- ");
        scanf("%d",&a);

        if(a<=1)
        {
            printf("\n%d is not prime",a);
            return 0;
        }

        for(i=2 ; i <= sqrt(a) ; i++)
        {
            if(a%i == 0)
            {
                printf("\n%d is not prime",a);
                return 0;
            }
            else
            printf("\n%d is prime",a);
        }
        return 0;
    }