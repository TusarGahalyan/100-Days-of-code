//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
    int main(){
        int a,b,c;
        printf("Enter the values of three sides of a triangle :- ");
        scanf("%d%d%d",&a,&b,&c);

        if(a==b && a==c){
            printf("\nIt is an Equilateral triangle");
        }
        else if(a==b && a!=c){
            printf("\nIt is an Isosceles triangle");
        }
        else{
            printf("\nIt is a Scalene triangle");
        }
        return 0;
    }