//Q68: Delete an element from an array.

#include<stdio.h>
    int main()
    {
        int a , i , position , u ;
        printf("Enter the size of array :- ");
        scanf("%d",&a);

        int arr[a];
        printf("Enter the elements of array :- ");
        for(i=0 ; i<a ; i++)
        {
        scanf("%d",&arr[i]);
        }

        printf("Enter the position from which you want to delete an element :- ");
        scanf("%d",&position);

        if(position == -1)
        {
            printf("Element not found");
        }
        else
        {
        for(i=position ; i<a-1 ; i++)
            {
                arr[i]=arr[i+1];
            }a--;
        }
        printf("These are the elements of array after deletion :- ");
        
        for(i=0 ; i<a ; i++)
        {
        printf(" %d",arr[i]);
        }

        return 0;

    }