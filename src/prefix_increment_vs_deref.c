#include <stdio.h>

int main(void)
{
    int arr[] = 
    {
	1, 2, 3, 4, 5
    };
    int *ptr = arr;
    
    printf("%p\n", ptr);
    printf("%d\n", (*ptr)++);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);
    printf("%d\n", *++ptr);
    printf("%p\n", ptr);
    
}
