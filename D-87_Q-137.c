//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include<stdio.h>
    enum roles{
        ADMIN,
        USER,
        GUEST,
    }R;
    int main(){
        char ch;
        printf("Enter your role (0 = ADMIN , 1 = USER , 2 = GUEST) :- ");
        scanf("%d",&ch);

        R = ch;
        if(R==ADMIN) printf("Welvome Admin\n");
        else if(R==USER) printf("Welcome User\n");
        else printf("Welcome Guest\n");

        return 0;
    }