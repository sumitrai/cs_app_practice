#include <stdio.h>

#if defined(__i386__)
#define SIZEOF_PRINT_FMT "%10u"
#elif defined(__x86_64__)
#define SIZEOF_PRINT_FMT "%10lu"
#else
#define SIZEOF_PRINT_FMT "%10d"
#endif

#define SIZEOF(type) ((size_t)((type *)0 + 1) - (size_t)((type *)0))
#define PRINT_SIZEOF(var) printf("%-25s" SIZEOF_PRINT_FMT "\n", #var, sizeof(var))

int main(void)
{
    printf("%lu\n", SIZEOF (int));
    printf("%zu\n", (size_t)((int *) 1 + 1));
    printf("%zu\n", (size_t)((int *) 100 + 1));
    return 0;
}
