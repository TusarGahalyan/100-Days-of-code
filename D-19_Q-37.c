//Q37: Write a program to find the LCM of two numbers.

#include<stdio.h>
    int main()
    {
        int a , b , i , hcf , lcm ;
        printf("Enter thr value of a and b :- ");
        scanf("%d%d",&a,&b);

        for(i=1 ; i<=a && i<=b ; i++)
        {
           if(a%i == 0 && b%i == 0)
           {
            hcf = i;
           } 
        }
            lcm = (a*b)/hcf;//It is th ecommon formula to find lcm
            printf("%d",lcm);

        return 0;
    }