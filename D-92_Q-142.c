//Q142: Store details of 5 students in an array of structures and print all.


#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter name :- ");
        scanf("%s ", s[i].name);

        printf("Enter Roll_no :- ");
        scanf("%d",&s[i].roll);

        printf("Enter Marks :- ");
        scanf("%f",&s[i].marks);
    }
    for (i = 0; i < 5; i++) {
        printf("NAME : %s , ROLL_NO : %d , MARKS : %.2f\n",
               s[i].name, s[i].roll, s[i].marks);
    }
    return 0;
}
