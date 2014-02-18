#include <stdio.h>

#define MAX_NUMBERS 95


int main() {
   int i;
   unsigned long fibs[MAX_NUMBERS] = {0, 1};
   
   // Print Fibonacci numbers, iteratively
   for(i = 2; i < MAX_NUMBERS; i++) {
      fibs[i] = fibs[i - 2] + fibs[i - 1];
      printf("New Fibonacci #%02d = %24lu\n", i, fibs[i]);
   }
}

