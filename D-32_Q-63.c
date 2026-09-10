//Q63: Merge two arrays.

#include<stdio.h>
    int main()
    {
        int a , i , k;
        printf("Enter the size of array1 :- ");
        scanf("%d",&a);

        int arr1[a];
        printf("Enter the elements of array1 :- ");
        for(i=0 ; i<a ; i++)
        {
        scanf("%d",&arr1[i]);
        }
        
        int b , j ;
        printf("Enter the size of array2 :- ");
        scanf("%d",&b);

        int arr2[b];
        printf("Enter the elements of array2 :- ");
        for(j=0 ; j<b ; j++)
        {
        scanf("%d",&arr2[j]);
        }
        
        int arr3[a+b];
        i = j = k = 0;

        while(i<a && j<b)
        {
            if(arr1[i]<arr2[j])
            {
                arr3[k]=arr1[i];
                i++;
            }
            else
            {
                arr3[k]=arr2[j];
                j++;
            }
            k++;
        }
        while(i<a)
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        while(j<b)
        {
            arr3[k]=arr2[j];
            k++;
            j++;
        }
            printf("Array after merging :- ");
            int c;
            for(c=0 ; c<a+b ; c++)
            printf("%d ",arr3[c]);
        
        return 0;
    }