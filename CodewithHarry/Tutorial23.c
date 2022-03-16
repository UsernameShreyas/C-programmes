#include <stdio.h>

int main()
{
    int marks[4] = {4, 54, 123, 22}; // Enter the numbers directly in the array we can use without asking the user...
    /*for(int i = 0; i < 4 ; i++)
    {
        printf("Enter the value of %d element of the array\n",i);
        scanf("%d",&marks[i]);
    }*/

    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d element of the array is %d\n", i, marks[i]);
    }
    /*int marks[4];
    marks[0]=34;
    printf("Marks of Student 1 is %d\n", marks[0]);
    return 0;
    */
}