#include "main.h"

void example_math()
{
   char num1, num2;
   float sum;
 
   num1 = num2 = 58;

   puts("left tits");
   while((num1 > '9' || num1 < '0')) {
       scanf("%c", &num1);
   }

   puts("right tits");
   while(num2 > '9' || num2 < '0') {
       scanf("%c", &num2);
   }

   sum = (num1 - 48) + (num2 - 48);
   printf("size of tits = %.0f\n", sum);
   printf("used RAM:  %i bytes\n", sizeof(num1) + sizeof(num2));

}
