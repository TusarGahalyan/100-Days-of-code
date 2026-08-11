//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>

    int main()
    {
        float a , area , circumference ;
        float pi=3.14;
        printf("Enter the radius of the circle :- ");
        scanf("%f\n",&a);

        area = pi*a*a;
        printf("The area of the circle is = %f\n",area);

        circumference = 2*pi*a;
        printf("The circumference of the circle is = %f\n",circumference);

        return 0;

    }