//Q67: Insert an element in an array at a given position.

//Insertion of elements in array

#include<stdio.h>
    int main()
    {
        int a , i , position , u ;
        printf("Enter the size of array :- ");
        scanf("%d",&a);

        printf("Enter the position at which you want to insert an element :- ");
        scanf("%d",&position);

        printf("Enter the element you want to insert :- ");
        scanf("%d",&u);

        int arr[a+1];
        printf("Enter the elements of array :- ");
        for(i=0 ; i<a ; i++)
        {
        scanf("%d",&arr[i]);
        }

        for(i=a ; i>=position ; i--)
            {
                arr[i]=arr[i-1];
            }
        arr[position-1]=u;
        a++;
        printf("These are the elements of array arter insertion :- ");
        
        for(i=0 ; i<a ; i++)
        {
        printf(" %d",arr[i]);
        }

        return 0;

    }