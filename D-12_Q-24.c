/*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/

#include<stdio.h>
    int main()
    {
        int a , bill=0;
        printf("Enter the number of units consumed :- ");
        scanf("%d",&a);

        if(a <= 100)
        {
            bill = 5*a;
            printf("\nBill = %d",bill);
        }
        else if(a>100 && a<=200)
        {
            bill = (100*5)+(a-100)*7;
            printf("\nBill = %d",bill);
        }
        else if(a > 200 && a <= 300)
        {
            bill = (5*100)+(7*100)+(a-200)*10;
            printf("\nBill = %d",bill);
        }
        else if(a>300)
        {
            bill = (5*100)+(7*100)+(10*100)+(a-300)*12;
            printf("\nBill = %d",bill);
        }
        return 0;
    }



    
