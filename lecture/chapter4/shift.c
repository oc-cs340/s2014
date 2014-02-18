#include <stdio.h>

int main() {
   unsigned char value = 0xCC;
   int settings = 0xE574;

   printf("0x%X\n", value);

   value <<= 3;
   printf("After shifting left...\n");
   printf("0x%X\n", value);

   value >>= 3;
   printf("After shifting right...\n");
   printf("0x%X\n", value);

   value <<= 4;
   printf("After shifting left again...\n");
   printf("0x%X\n", value);

   if(settings & (1 << 5))
      printf("Setting #6 is set\n");
   else
      printf("Setting #6 is cleared\n");

   return 0;
}
