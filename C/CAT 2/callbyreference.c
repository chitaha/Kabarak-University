#include <stdio.h>
 
/* function declaration */
void swap(int *x, int *y);
 
int main () {

   /* local variable definition */
   int a = 6;
   int b = 2987;
 
   printf("Before: a is %d and b is %d\n", a, b);
 
   /* calling a function to swap the values.
      * &a indicates pointer to a ie. address of variable a and 
      * &b indicates pointer to b ie. address of variable b.
   */
   swap(&a, &b);
 
   printf("After: a is %d and b is %d\n", a, b);
 
   return 0;
}

/* function definition to swap the values */
void swap(int *x, int *y) {

   int temp;
   temp = *x;    /* save the value at address x */
   *x = *y;      /* put y into x */
   *y = temp;    /* put temp into y */
  
   return;
}