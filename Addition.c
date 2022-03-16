#include <stdio.h>
#include <stdlib.h>
#define pi 3.142
void find_area(int *,float *);
int main()
{
    int r;
    float area,area_1;
    printf("\nEnter radius : \n");
    scanf("%d",&r);

    area = pi * r * r ;
    printf("\nArea : %0.3f",area);
    find_area(&r,&area_1);
    printf("\nArea : %.3f",area_1);
    return 0;
}
void find_area(int *r,float *a)
{
    *a = pi * (*r) * (*r);
}