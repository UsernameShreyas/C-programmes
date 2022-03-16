#include<stdio.h>
int n;
void read_array(int arr[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void main()
{
    int n, sum;
    int arr[n];
    printf("size of array\n");
    scanf("%d",&n);
    read_array(arr[n]);
    add(arr[n],n,sum);
}

void add(int arr[n],int n, int sum)
{
    sum =0;
    int i ;
    for(i=0;i<n;i++)
    {
        sum = sum + arr[i];

    }

}