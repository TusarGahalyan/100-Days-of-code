//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
    int main(){
        int c , s ;
        int profit , loss ;
        int profit_pcnt , loss_pcnt ;
        printf("Enter 'Cost price' and 'Selling price' :- ");
        scanf("%d%d",&c,&s);

        if(c < s){
            profit = s-c;
            profit_pcnt = (profit*100)/c;
            printf("\nProfit %d %%",profit_pcnt);
        }

        else if(c > s){
            loss = c-s;
            loss_pcnt =(loss*100)/c;
            printf("\nLoss %d %%",loss_pcnt);
        }
        else{
            printf("\nNo profit  no loss");
        }
        return 0 ;
        
    }