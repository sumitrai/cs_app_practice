#include <stdio.h>

#define TMIN_LONG (1L << ((sizeof(long) << 3) - 1))

int main(void)
{
   printf("%ld\n", TMIN_LONG);
   printf("0x%lx\n", TMIN_LONG);
   return 0;
}
