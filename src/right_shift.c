#include <stdio.h>

int main(void)
{
//    int a = 0xa0b0c0f0;
/*
    printf("0x%x\n", a);
    printf("0x%x\n", a >> 4);
    printf("0x%.2x\n", 0x64 >> 3);
    printf("0x%.2x\n", 0x44 >> 3);
*/
    int uval = 0xFEDCBA98;
    printf("0x%x\n", uval);
    
    printf("0x%.2x\n", uval >> 4);
    printf("0x%.2x\n", 0xFEDCBA98 >> 8);
    
}

