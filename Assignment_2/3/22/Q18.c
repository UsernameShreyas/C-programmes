/*Q18)	Read an array of numbers with size n and another number m. then for every element 
        print the sum of m next numbers in sequence from array.
*/

#include <stdio.h>      //Header File   
#include <stdlib.h>     //Header File
#include <math.h>       //Header File
void read_array(int a[],int n);         //Function Call
void add_m(int a[],int n,int m);        //Function Call
int main()
{
   int a[100],n,m;
    printf("Value of n:\n");
    scanf("%d",&n);
     printf("Value of m:\n");
    scanf("%d",&m);
    read_array(a,n);
    add_m(a,n,m);
    return 0;
}
void read_array(int a[],int n)          //Defining a Function
{   int i;
    printf("enter no.s\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void add_m(int a[],int n,int m)         //Defining a Function
{
    int i=0,j=0;
    for(i=0;i<n-m;i++)
    {
         int sum=0;
        for(j=i+1;j<m+i+1;j++)
    {
        sum=sum+a[j];
    }
     printf("for position %d, sum= %d\n",i+1,sum);
    }
}