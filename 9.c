// take integer input and print te absolute value of that integer 
#include <stdio.h>
  int main() {
    int x ;
     printf("enter the number");
     scanf("%d",&x);
     if (x<0) {
         x= x*(-1);
     }
       printf("the absolute value of integer is %d", x);
       return 0;

     }
  