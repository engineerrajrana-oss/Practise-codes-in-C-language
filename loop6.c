// print the table of 'n' .here 'n' is a integer which user will input 
#include <stdio.h>
   int main () {
    int n;
     printf("enter the number:");
      scanf("%d" , &n);
      for (int i=n; i<=n;i=i+n ){
         printf("%d",i);

      }
      return 0;
       
   }