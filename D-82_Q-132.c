//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include<stdio.h>
    enum Tlights{
        RED,
        YELLOW,
        GREEN,
    }L;
    int main(){
        int Lights;
        printf("Enter the light (RED or YELLOW or GREEN) :- ");
        scanf("%d",&Lights);

        L = Lights;
        if(L == RED) printf("Stop\n");

        else if(L == YELLOW) printf("Wait\n");

        else printf("Go\n");

        return 0;
    }