#include <stdio.h>

void print_nums(int *n, int l) {
   int i;

   for(i = 0; i < l; i++ )
      printf("%x ", *n);
   printf("\n");
}


int main() {
   int num[10];
   int i;
   char c = 0xa;

   for(i = 0; i < 10; i++)
      ;
   printf("i: %d\n", i);
   num[i] = 44;
   printf("i: %d\n", i);

   //num[9] = -1;
   print_nums(num, 10);
   
   return 0;
}
