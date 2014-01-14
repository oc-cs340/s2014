#include <stdio.h>

/* print Fahrenheit-Celsius table
   from 0F, 20F, 40F ... 30F */

main() {
   int fahrenheit, celsius;
   int lower, upper, step;

   lower = 0;    // Lower limit
   upper = 300;  // Upper limit
   step = 20;    // Step size

   fahrenheit = lower;
   while(fahrenheit <= upper) {
      celsius = 5 * (fahrenheit - 32) / 9;
      printf("%d\t%d\n", fahrenheit, celsius);
      fahrenheit = fahrenheit + step;
   }
}

