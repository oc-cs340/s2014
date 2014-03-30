#include <stdio.h>

#define MAX_NUMBERS 95


int main() {
   int i;
   unsigned long value;
   unsigned long n1 = 1;
   unsigned long n2 = 0;
   
   // Print Fibonacci numbers, iteratively
   for(i = 2; i < MAX_NUMBERS; i++) {
      value = n1 + n2;
      printf("New Fibonacci #%02d = %24lu\n", i, value);
      n2 = n1;
      n1 = value;
   }
}

