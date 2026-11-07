//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include<stdio.h>
    enum operations{
        ADD,
        SUBTRACT,
        MULTIPLY,
    }O;
    int main(){
        int ch;
        int u , v;
        printf("Enter the operation (0 for ADD , 1 for SUBTRACT , 2 for MULTIPLY) :- ");
        scanf("%d",&ch);
        printf("Enter the two numbers :- ");
        scanf("%d %d",&u,&v);

        O = ch;
        switch (O){
            case ADD:
                printf("%d",u+v);
                break;

            case SUBTRACT:
                printf("%d",u-v);
                break;

            case MULTIPLY:
                printf("%d",u*v);
                break;
        }
        return 0;
    }