#include <stdio.h>

int main(void)
{
    int a = 0xaabbccdd;

    printf("%x\n", a);
    printf("%x\n", a << 8);
    printf("%x\n", a << 48);
    
}
