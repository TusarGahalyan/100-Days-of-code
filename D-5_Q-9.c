//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>
    int main()
    {
        float p , r , t;
        float n=1;
        float intrst , comp ;
        printf("Enter the value of p(principal) , r(rate) , t(time) : ");
        scanf("%f%f%f",&p,&r,&t);

        intrst = (p*r*t)/100.0;
        printf("\nSimple interest is = %f",intrst);

        comp =( p * pow((1 + (r / (n * 100.0))), n * t))-p;
        printf("\nCompound interest is = %f",comp);

        return 0;

    }