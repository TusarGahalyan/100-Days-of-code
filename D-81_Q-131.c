//Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

#include<stdio.h>

    enum days{
        Sunday,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
    }d;
    int main(){
        for(d=0 ; d<7 ; d++){
            switch(d){
                case 0:
                printf("Sunday = %d\n",d);
                break;

                case 1:
                printf("Monday = %d\n",d);
                break;

                case 2:
                printf("Tuesday = %d\n",d);
                break;

                case 3:
                printf("Wednesday = %d\n",d);
                break;

                case 4:
                printf("Thursday = %d\n",d);
                break;

                case 5:
                printf("Friday = %d\n",d);
                break;

                case 6:
                printf("Saturday = %d\n",d);
                break;
            }
        }return 0;
    }