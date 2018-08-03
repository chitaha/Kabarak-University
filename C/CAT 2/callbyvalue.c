#include <stdio.h>
 
/* function declaration */
void swap(int x, int y);
 
int main () {

   /* local variable definition */
   int a = 100;
   int b = 200;
 
   printf("Before: a is %d and b is %d\n", a, b);
 
   /* calling a function to swap the values */
   swap(a, b);
 
   printf("After: a is %d and b is %d\n", a, b);
 
   return 0;
}

/* function definition to swap the values */
void swap(int x, int y) {

   int temp;

   temp = x; /* save the value of x */
   x = y;    /* put y into x */
   y = temp; /* put temp into y */
  
   return;
}