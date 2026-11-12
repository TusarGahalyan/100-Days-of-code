//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

#include<stdio.h>
    struct Student{
        char name[50];
        int roll_no;
        float marks;
    };
    int main(){
        struct Student st;
        printf("Enter the data :- \n");
        printf("Name : ");
        scanf("%s",st.name);
        printf("Roll_no : ");
        scanf("%d",&st.roll_no);
        printf("Marks : ");
        scanf("%f",&st.marks);

        printf("Name: %s | Roll_no: %d | Marks: %f ",st.name,st.roll_no,st.marks);
        return 0;
    }