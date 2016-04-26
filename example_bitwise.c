#include "main.h"

void example_bitwise()
{
   int c, size;

   while((c = getchar()) != EOF)
   {
       if (c == 10) continue;

       size =  8 * sizeof(c); 
       for (int i = size - 1; i >= 0; --i) {
           int shift = (c >> i);
           int bit = shift & 1;
	  //printf("%i >> %i = %i\n", c, i, shift);
          // 49 > 32 = 49 Pfffff
          printf("%i", bit);
       }

       printf("\n");
   }
}
