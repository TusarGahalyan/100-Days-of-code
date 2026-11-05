//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include<stdio.h>
    enum RESULT{
        SUCCESS,
        FAILURE,
        TIMEOUT,
    }R;
    int main(){
        char result;
        printf("Enter the result (SUCCESS , FAILURE OR TIMEOUT):- ");
        scanf("%d",&result);

        R = result;
        if(R == SUCCESS) printf("Operation successful\n");

        else if(R == FAILURE) printf("Operation failed\n");

        else printf("Time is out\n");
        return 0;
    }