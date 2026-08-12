//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
    int main()
    {
        float a;
        float temp;
        printf("Enter temperatuire in celcius : \n");
        scanf("%f",&a);
        
        temp = (a*9/5)+32;
        printf("The temperature in farenheit is : %f",temp);

        return 0;

    }