#ifndef __CS_UTILS__
#define __CS_UTILS__

#include <stdio.h>

#if defined(__i386__)
#define SIZEOF_PRINT_FMT "%10u"
#elif defined(__x86_64__)
#define SIZEOF_PRINT_FMT "%10lu"
#else
#define SIZEOF_PRINT_FMT "%10d"
#endif

#define STR(x) #x
#define PRINT_SIZEOF_HEADER \
{								\
  printf("===========================================================" \
	 "=====================\n"); \
  printf("%10s %30s", "Type", "Size (in bytes)\n"); \
  printf("===========================================================" \
	 "=====================\n"); \
 }
    
#define PRINT_SIZEOF(var) printf("%-25s" SIZEOF_PRINT_FMT "\n", #var, sizeof(var))

#define PRINT_INFO(fmt, ...)   printf("%s: %s: " fmt, __FILE__, __FUNCTION__, ##__VA_ARGS__)

#endif
