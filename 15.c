// take 3 number input and tell if they can be side of traingle
#include <stdio.h>
 int main () {
    int x,y,z;
    printf("enter the first side of traingle");
    scanf("%d", & x);
    printf("enter the second side of traingle");
    scanf("%d", & y);
    printf("enter the third side of traingle");
    scanf("%d", & z);
    if ((x+y)>z && (y+z)>x && (x+z)>y) {
        printf("traingle can be formed");
    }
     else {
         printf("traingle cannot be formed");
     }
      return 0 ;
      

 }