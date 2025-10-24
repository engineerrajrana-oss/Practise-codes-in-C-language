// if the age of ram ,shyam and ajay are input through the keybord , write a programm tpo determine the youngest of them
#include <stdio.h>
int main () {
    int x,y,z;  //x=ram,y=shyam , z=ajay
    printf("enter the age of ram");
    scanf("%d" , & x);
    printf("enter the age of shyam");
    scanf("%d" , & y);
    printf("enter the age of ajay");
    scanf("%d" , & z);
    if (x<y && x<z) {
        printf("ram is the youngest");
    }
    if (y<x && y<z) {
        printf("shyam is youngest");

    }
     if (z<x && z<y) {
        printf("ajay is the graeatest");
     }
    return 0 ;

}