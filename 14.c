// take 3 possitive intger input and print the greatest of them 
#include <stdio.h>
  int main () {
    int x,y,z;
    printf("enter the first integer:");
    scanf("%d", &x);
    printf("enter the second integer:");
    scanf("%d", &y);
    printf("enter the third integer:");
    scanf("%d", &z);
     if (x>y && x>z) {
         printf("x is the graetest integer function");
     }
     if (y>x && y>z) {
        printf("y is the gratest integer function");
     }
    if (z>x && z>y) {
        printf("z is the gratest integer function");
    }
       
  }