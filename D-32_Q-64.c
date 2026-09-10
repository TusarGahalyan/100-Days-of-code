//Q64: Find the digit that occurs the most times in an integer number.

#include<stdio.h>
    int main()
    {
        int number , d , i , MaxDigit = 0 , MaxCount = 0;
        int arr[10] = {0};
        printf("Enter the value of number :-");
        scanf("%d",&number);

        while(number>0)
        {
            d = number%10;
            arr[d]++;
            number = number/10;
        }
        for(i=0 ; i<10 ; i++)
        {
            if(arr[i] > MaxCount)
            {
                MaxCount = arr[i];
                MaxDigit = i;
            }
        }
        printf("Digit that occurs the most times :- %d",MaxDigit);

        return 0 ;
    }