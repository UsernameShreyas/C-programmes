#include<stdio.h>
int add(int n,int sum)
{
    int i;
    sum =0;
    for(i=0;i<=n;i++)
    {
        sum = sum + i;
    }
    printf("Sum of n natural numbers is %d\n", sum);
    return sum;
}

int main()
{
    int n, result, sum;
    FILE*pt;
    printf("Enter limit");
    scanf("%d",&n);
    result = add(n, sum);
    printf("%d",result);
    pt = fopen("result.txt", "w");
    fprintf(pt,"%d",result);
    fclose(pt);
}