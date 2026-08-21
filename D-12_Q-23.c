/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/

#include<stdio.h>
    int main(){
        int a;
        int fine=0;
        printf("Enter the number of late days :- ");
        scanf("%d",&a);

        if(a <= 5)
        {
            fine = 2*a;
            printf("\nFine %d",fine);
        }
        else if(a>5 && a<=10)
        {
            fine = (5*2)+(a-5)*4;
            printf("\nFine %d",fine);
        }
        else if(a > 10 && a <= 30)
        {
            fine = (5*2)+(5*4)+(a-10)*6;
            printf("\nFine %d",fine);
        }
        else
        {
            printf("\nMenbership cancelled");
        }
        return 0;
    }

