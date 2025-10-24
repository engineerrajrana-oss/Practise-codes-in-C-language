//if cost price and selling price pf an item is input through the keybord, wapnto determine whether the seller has made profit or incurred loss. also determine how much profit he ,ade or loss.
#include <stdio.h>
  int main () {
     int x,y ;
     printf("enter the selling price:");
     scanf("%d" , & x);
     printf("enter the cost price:");
     scanf("%d" , & y);
     if (x>y) {
         printf("you are in the profit");
     }
       else {
           printf("you are not in profit");

       }
       return 0;
          
     
  }