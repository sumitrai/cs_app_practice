#include <stdio.h>

#include "show_bytes.h"

#if 0
void fun2(int j)
{
    int arr[j];
    printf("%zu\n", sizeof arr);
}

void fun(int i)
{
    fun2(i);
}
#endif

int main(int argc, char *argv[], char *envpp[])
{
    printf("%s\n", "hello");
    printf("%p\n", "hello");
    printf("%p\n", & "hello");
    printf("%lu\n", sizeof("hello"));
    int i = 0xaabbccdd;
    
    SHOW_VAR(i);
    SHOW_VAR("12345");
    SHOW_VAR("mnopqr");
}
