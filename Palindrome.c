#include<stdio.h>
int main()
{
    int n ,r ,sum =0, temp;
    printf("Enter the number to be checked");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
        r = n%10;
        sum = (sum*10) + r;
        n = n/10;
    }
    if(temp == sum)
    {
        printf("The number given is a palindrome");
    }
    else
    {
        printf("The number given is not a palindrome");
    }
    return 0;

}   