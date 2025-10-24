// take positive integer input and tell if it is a three digit number or not.
  #include <stdio.h>
   int main () {
    int x;
    printf("enter the number:");
    scanf("%d", &x);
     if (x>99 && x<999) {
         printf("the number is three digit number");

     }
      else {
            printf("the number is not three digit");
      }
      return 0;
   }