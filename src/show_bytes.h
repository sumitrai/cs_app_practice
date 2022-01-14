#ifndef __CS_SHOW_BYTES__
#define __CS_SHOW_BYTES__

#include <stdio.h>

typedef unsigned char *byte_pointer;


#define SHOW_VAR(var) show_bytes((byte_pointer)&var, sizeof(var))
    
static void show_bytes(byte_pointer start, size_t len)
{
    int i;
    for (i = 0; i < len; i++)
	printf("%.2x ", start[i]);
    printf("\n");
}

#endif // __CS_SHOW_BYTES__
