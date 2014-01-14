#include <stdio.h>

#define MAXLINE 1000

int getlinelen(char s[], int lim);
void copy(char to[], char from[]);

// Print the longest input line
main() {
   int len;
   int max;
   char line[MAXLINE];
   char longest[MAXLINE];

   max = 0;
   while((len = getlinelen(line, MAXLINE)) > 0)
      if(len > max) {
         max = len;
         copy(longest, line);
      }
   if(max > 0)
      printf("The longest line is:\n%s\n", longest);

   return 0;
}

/* getlinelen: read a line into s, return its length

   s: the target string (char array)
   lim: the maximum line length */
int getlinelen(char s[], int lim) {
   int c, i;

   for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
      s[i] = c;
   if(c == '\n') {
      s[i] = c;
      ++i;
   }
   s[i] = '\0';
   
   return i;
}

/* copy: copy as string (char array) from one location to another

   to: the target location (char array)
   from: the source location (char array) */
void copy(char to[], char from[]) {
   int i = 0;

   while((to[i] = from[i]) != '\0')
      ++i;
}

