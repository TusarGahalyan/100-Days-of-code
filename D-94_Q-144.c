//Q144: Write a function that accepts a structure as parameter and prints its members.

#include<stdio.h>
    struct student{
        char name[50];
        int roll_no;
        int marks;
    };

    void pr(struct student st){
        printf("Name: %s | Roll_no: %d | Marks: %d ",st.name, st.roll_no, st.marks);
    }
    int main(){
        struct student st;
        printf("Enter name of student :- ");
        scanf("%s",st.name);

        printf("Enter Roll_no of student :- ");
        scanf("%d",&st.roll_no);

        printf("Enter Marks of student :- ");
        scanf("%d",&st.marks);

        pr(st);
        return 0;
    }