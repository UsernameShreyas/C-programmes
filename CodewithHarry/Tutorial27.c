#include <stdio.h>
int main()
{
    //int a = 34;
    //int *ptra = &a;
    //printf("%d\n", ptra);
    //printf("%d\n", ptra - 1);

    int arr[] = {1,2,3,4,5,6,67};
    printf("The value at position 3 of array is %d\n", arr[3]);
    printf("The value at position 1 of array is %d\n", arr[1]);
    printf("The value at position 3 of array is %d\n", *(arr+3));

    printf("%d", arr[3]);
    return 0;
}
