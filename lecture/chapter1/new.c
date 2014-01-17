#include <stdio.h>

// An external (global) constant
const int MAXLINE = 1000;

main() {
   // Checking sizes of various data types
   char c;
   int i;
   float f;
   long l;

   printf("%lu\n", sizeof(c));
   printf("%lu\n", sizeof(i));
   printf("%lu\n", sizeof(f));
   printf("%lu\n", sizeof(l));
}

