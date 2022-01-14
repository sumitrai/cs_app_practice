#include <stdio.h>
#include <stdint.h>

#include "utils.h"

#define STR(x) #x

struct array
{
    char val;
    char arr[];
    
};

    
int main(int argc, char *argv[], char *envpp[])
{
#if sizeof (char)
    PRINT_SIZEOF_HEADER;
    PRINT_SIZEOF(char);
    PRINT_SIZEOF(unsigned char);
    PRINT_SIZEOF(short);
    PRINT_SIZEOF(unsigned short);
    PRINT_SIZEOF(int);
    PRINT_SIZEOF(unsigned int);
    PRINT_SIZEOF(long);
    PRINT_SIZEOF(unsigned long);
    PRINT_SIZEOF(int32_t);
    PRINT_SIZEOF(uint32_t);
    PRINT_SIZEOF(int64_t);
    PRINT_SIZEOF(uint64_t);
    PRINT_SIZEOF(char *);
    PRINT_SIZEOF(float);
    PRINT_SIZEOF(double);
    PRINT_SIZEOF(long double);
    PRINT_SIZEOF(long long);
#endif
}
