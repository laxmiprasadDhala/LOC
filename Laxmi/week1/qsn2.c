#include <stdio.h>
int main(){
     int num;
     printf("Enter the number :");
     scanf("%d",&num);
     
     if(num>0)
          printf("The number %d is positive",num);
     else if(num<0)
         printf("The number %d is negative",num);
     else
         printf("The number is zero");
 
   return 0;
  } 