//Q59: Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    
    int i , a , even=0 , odd=0;
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
        if(arr[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even :- %d , Odd :- %d",even,odd);
    return 0;

}