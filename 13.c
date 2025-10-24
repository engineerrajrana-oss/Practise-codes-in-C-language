// take possitive input and tell if it divisble by 5 and 3
#include <stdio.h>
int main () {
     int x;
    printf("enter the number");
     scanf("%d", &x);
      if (x%5==0 || x%3==0) {
         printf("this number is divisble by 5 or 3");
      }
       else {
            printf("thi number is not divisble by 5 or 3");
       }
       return 0 ;

}