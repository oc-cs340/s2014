#include <stdio.h>
#include "atof.h"

int main() {
   char float1[] = "3521.984";
   char float2[] = "-0089.34   ";
   char float3[] = "   +0.2334";

   printf("Converting %s to %lf\n", float1, atof(float1));
   printf("Converting %s to %lf\n", float2, atof(float2));
   printf("Converting %s to %lf\n", float3, atof(float3));

   return 0;
}

