#include <stdio.h>

#define LOWER 0    // Lower limit of table
#define UPPER 300  // Upper limit of table
#define STEP  20   // Step size

/* print Fahrenheit-Celsius table
   from 0F, 20F, 40F ... 30F */

main() {
   int fahr;

   for(fahr = LOWER; fahr <= UPPER; fahr += STEP)
      printf("%3d\t%6.1f\n", fahr, 5.0 / 9.0 * (fahr - 32));
}

