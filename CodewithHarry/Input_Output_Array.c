#include <stdio.h>

int main()
{
    int value[5];
    printf("Enter the 5 integers:\n ");
    // taking inout and output in an array
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &value[i]);
    }

    printf("Displaying Integers: \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", value[i]);
    }
    return 0;
}