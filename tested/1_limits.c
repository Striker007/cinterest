/**
* Determine some system limits
* gcc -Wall -std=c99 -o prog 1_limits.c 
*/

#include <stdio.h>
#include <limits.h>
#include <unistd.h>

int main() {
   printf("Max file descriptors: %ld\n",sysconf(_SC_OPEN_MAX));
   printf("To change above, use ksh builtin \"ulimit\" or use \"setrlimit(2)\".\n");
   printf("Max processes per ID: %ld\n",sysconf(_SC_CHILD_MAX));
   printf("Max arg length: %ld\n",sysconf(_SC_ARG_MAX));
   return 0;
}
