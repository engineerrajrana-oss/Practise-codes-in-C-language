//  Dispaly this ap 1,3,5,7,9, up to 'n'
#include <stdio.h>
 int main () {
    int n;
      printf("enter the number:");
      scanf ("%d" , &n);
    for (int i =1 ; i<=2*n-1;i+2) {
        printf("%d",i);

    }
    return 0;
     
 }