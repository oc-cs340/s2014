#include <stdio.h>
#include <string.h>

int main() {
   int i = -40;
   char c = 'A';
   char s[10] = "Message";
   char *l;

   printf("i: %x\n", i);
   printf("i: %d\n", *(&i));
   printf("i: %d\n", i);
   printf("i: %x\n", &i);
   printf("c: %x\n", &c);
   printf("s: %x\n", s);

   l = s;
   printf("%s\n", l);
   printf("%s\n", s);

   l[0] = 'T';
   printf("%s\n", l);
   printf("%s\n", s);

   *l = 'R';
   printf("%s\n", l);
   printf("%s\n", s);

   *l = 'M';
   *(s + 4) = '\0';
   printf("%s\n", l);
   printf("%s\n", s);

   *(s - 4) = 'A';
   printf("%s\n", l);
   printf("%s\n", s);
   printf("i: %d\n", i);


/*
   printf("c: %x\n", c);
   printf("s: %x\n", s);
   s[0] = '\0';
   printf("s: %x\n", s);
   strcpy(s, "Hello!");
   printf("s: %s\n", s);
   printf("s: %s\n", s + 1);
   printf("s: %x\n", s);
   printf("s: %x\n", s + 1);
   //s = "Memory";
   //printf("s: %s\n", s);
*/

   return 0;
}

