//Q60: Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    
    int i , a , positive=0 , negative=0 , zero=0;
    printf("Enter the size of array :- ");
    scanf("%d",&a);

    int arr[a];
    printf("Enter elements of array :- ");
    for(i = 0; i < a; i++) 
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < a; i++)
    {
        if(arr[i]>0)
        {
            positive++;
        }
        else if(arr[i]<0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    printf("positive :- %d , negative :- %d , zero :- %d",positive,negative,zero);
    return 0;

}