#include <stdio.h>

int main()
{
    printf("Lets learn about some pointers\n");
    int a=15;
    int* ptra = &a;
    printf("The address of a is %d\n",*ptra);
    printf("The value of a is %d\n",*ptra);
    printf("The value of a in hexadecimal is %x\n",*ptra);
    return 0;
}