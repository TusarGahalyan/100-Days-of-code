//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
    int main()
    {
        int a , b , area , perimeter ;
        printf("Enter the length and breadth of the rectangle :- ");
        scanf("%d%d",&a,&b);

        area = a*b;
        printf("The are of the rectangle is = %d\n",area);

        perimeter = 2*(a+b);
        printf("The perimeter of the rectangle is = %d\n",perimeter);

        return 0;

    }