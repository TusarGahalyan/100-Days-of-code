/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include<stdio.h>
   int main()
   {
      int i , j , k , a=4 ;
      for(i=0;i<=a;i++)
            {
                for(j=0;j<=a-i;j++){
                     printf(" ");}
                
                for(k=1;k<=(2*i-1);k++){
                     printf("*");}
               printf("\n");
            }

      for(i=a-1;i>=1;i--)
            {
                for(j=0;j<=a-i;j++){
                     printf(" ");}
                
                for(k=1;k<=(2*i-1);k++){
                     printf("*");}
               printf("\n");
            }
   }