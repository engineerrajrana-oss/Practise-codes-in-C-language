// given the length and breadth of rectangle , wap to find whether` the area of the rectangle is grater than its perimeter.
#include <stdio.h>
int main () {
    int l,b,a,p;
    a= l*b ;
    p=2*(l+b);
    printf("enter the length of the rectangle:");
    scanf("%d", &l);
     printf("enter the breadth of the rectangle:");
    scanf("%d", &b);
    if (p>a) {
        printf("perimeter of a rectangle is graeter than area");

    }
      else {
         printf("area of rectangle is graeter than perimeter");
      }
      return 0;
}
