#include <stdio.h>

#define MAX_NUMBERS 200

unsigned long fibonacci(int);

int main() {
   unsigned long value;
   int i;
   
   for(i = 0; i < MAX_NUMBERS; i++) {
      //printf("Outer loop: %d\n", i);
      value = fibonacci(i);
      printf("Fibonacci #%02d = %24lu\n", i, value);
   }
}

unsigned long fibonacci(int n) {
   //printf("Fibonacci(%d)\n", n);
   if(n == 0)
      return 0;
   else if(n <= 2)
      return 1;
   return fibonacci(n - 2) + fibonacci(n - 1);
}
