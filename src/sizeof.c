#include <stdio.h>

#if defined(__i386__)
#define SIZEOF_PRINT_FMT "%-10u"
#elif defined(__x86_64__)
#define SIZEOF_PRINT_FMT "%-10lu"
#else
#define SIZEOF_PRINT_FMT "%-10d"
#endif

#define STR(x) #x
#define PRINT_SIZEOF(var) printf("%s: " SIZEOF_PRINT_FMT, #var, sizeof(var))

/*
void print_size(const char *desc, )
{

    printf("char: "                SIZEOF_PRINT_FMT, sizeof(char));
    printf("short: "               SIZEOF_PRINT_FMT, sizeof(short));
    printf("unsigned short: "      SIZEOF_PRINT_FMT, sizeof(unsigned short));
    printf("int: "                 SIZEOF_PRINT_FMT, sizeof(int));
    printf("unsigned int: "        SIZEOF_PRINT_FMT, sizeof(unsigned int));
    printf("int32_t"               SIZEOF_PRINT_FMT,

}
*/
