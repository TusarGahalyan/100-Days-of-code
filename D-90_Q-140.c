//Q140: Define a struct with enum Gender and print person's gender.

#include<stdio.h>
    enum Gender{
        MALE,
        FEMALE,
    };
    struct record{
        enum Gender G;
    };
    int main(){
        struct record R;
        int PG;
        printf("Enter pearson's gender (0 for male , 1 for female) :- ");
        scanf("%d",&PG);

        R.G = PG;
        if(R.G == MALE) printf("Gender = Male\n");
        else printf("Gender = Female\n");

        return 0;
    }