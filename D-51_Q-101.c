/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. 
The elements in the sorted array might be repeated. 
You need to print the first and last occurrence of the target and print the index of first and last occurrence. 
Print -1, -1 if the target is not present.*/

#include<stdio.h>
    int main()
    {
        int target , i , a;
        printf("Enter the number of elements :- ");
        scanf("%d",&a);
        int nums[a];
        printf("Enter a sorted array(digits can be repeated) :- ");
        for(i=0 ; i<a ; i++){
            scanf("%d",&nums[i]);
        }
        printf("Enter the value of target element :- ");
        scanf("%d",&target);

        int first = -1 , last = -1;
        for(i=0 ; i<a ; i++){
            if(nums[i] == target){
                if(first == -1){
                    first = i;
                }last = i;
            }
        }
        printf("%d\n",first);
        printf("%d\n",last);
        return 0;
    }

