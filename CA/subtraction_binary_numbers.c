#include <stdio.h>
#include <stdlib.h>
int binAdd(int x, int y){
   int carry;
   while(y != 0){
       carry = (x & y) << 1;
       x = x ^ y;
       y = carry;
   }
   return x;
}
int binSub(int a, int b){
   int carry;
   b = binAdd(~b, 1);
  
   while(b != 0)
   {
       carry = (a & b) << 1;
       a = a ^ b;
       b = carry;
   }
   return a;
}
  
int main(){
   int firstNumber, secondNumber;
   int sub;
  
   printf("\nEnter the first number: ");
   scanf("%d", &firstNumber);
  
   printf("\nEnter the second number: ");
   scanf("%d", &secondNumber);
  
   sub = binSub(firstNumber, secondNumber);
  
   printf("\nThe difference between first number and second number is: %d\n", sub);
   return 0;
}

