#include <stdio.h>

main() {
   char *data;
   int maxlen = 100;
   int len;

   data = (char *)malloc(maxlen + 1);
   printf("What is your name? ");
   len = getline(&data, &maxlen, stdin);

   printf("Hello, %s.\n", data);
}

