//Q143: Find and print the student with the highest marks.

#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student s[3];
    int i , top = 0 ;

    for (i = 0; i < 3; i++) {
        printf("Enter name of student %d :- ",i+1);
        scanf("%s", s[i].name);

        printf("Enter Roll_no of student %d :- ",i+1);
        scanf("%d",&s[i].roll);

        printf("Enter Marks of student %d :- ",i+1);
        scanf("%f",&s[i].marks);
    }
    for (i = 0; i < 3; i++) {
        if(s[i].marks > s[top].marks){
            top = i;
        }
        }
    printf("Topper : %s having %.2f marks\n",s[top].name , s[top].marks);
    return 0;
}
