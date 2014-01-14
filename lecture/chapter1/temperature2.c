#include <stdio.h>

/* print Fahrenheit-Celsius table
   from 0F, 20F, 40F ... 30F */

main() {
   float fahrenheit, celsius;
   float lower, upper, step;

   lower = 0;  // Lower limit
   upper = 0;  // Upper limit
   step = 20;  // Step size

   fahrenheit = lower;
   while(fahrenheit <= upper) {
      celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
      printf("%3.0f\t%6.1f\n", fahrenheit, celsius);
      fahrenheit = fahrenheit + step;
   }
}

