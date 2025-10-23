// any yera is input through the keyword, wap to determine whether the year is leap or not
 #include <stdio.h>
 int main () {
    int x ;2
    printf("enter the any year throughout your keyword :");
    scanf("%d", &x);
    if (x%4==0) {
        printf("the given year is leap year");
    }
      else {
          printf ("the given year is not a leap year");
      }
 
    return 0; 
 }