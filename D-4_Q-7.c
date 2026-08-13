//Q7: Write a program to swap two numbers without using a third variable.

#include<stdio.h>
    int main()
    {
        int a , b ;
        printf("Enter the value of a and b : ");
        scanf("%d %d",&a,&b);

        printf("Following are the values of a and b before swapping : \n");
        printf("The value of a = %d\n",a);
        printf("The value of b = %d\n",b);

        a = a+b;
        b = a-b;
        a = a-b;
        printf("Following are the values of a and b after swapping : \n");
        printf("The value of a = %d\n",a);
        printf("The value of b = %d\n",b);

        return 0;

    }