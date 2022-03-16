#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("\nEnter 2 numbers : \n");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("\n%d is greater than %d \n",a,b);
    else
        printf("\n%d is greater than %d \n",b,a);

    greater_than(&a,&b);
    return 0;
}
void greater_than(int *a,int *b)
{
    if(*a > *b)
        printf("\n%d is greater than %d ",*a,*b);
    else
        printf("\n%d is greater than %d ",*b,*a);
}