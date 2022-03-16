/* Q1 Read an array of numbers with size n and count frequency of positive/negative numbers : */


#include <stdio.h>  //Header Files
#include <stdlib.h> //Header Files
void read_array(int [] , int );        //Function call
void disp_array(int [] , int );        //Function call
void p_freq(int [] , int );            //Function call
void n_freq(int [] , int );            //Function call
int main()
{
    int arr[100];
    int n;
    printf("Enter array size: \n ");
    scanf("%d",&n);
    read_array(arr,n);
    disp_array(arr,n);

    p_freq(arr,n);
    n_freq(arr,n);

    return 0;
}
void read_array(int a[] , int b )       //Defining Function
{
    int i;
    printf("\n Enter %d Elements in the Array : \n",b);
    for(i=0;i<b;i++)
    {
    scanf("%d",&a[i]);
    }
}
void disp_array(int a[] , int b)        //Defining Function
{
    int i;
    printf("\n Displaying  %d Array elements : \n",b);
    for(i=0;i<b;i++)
    {
    printf("%d  \t",a[i]);
    }

}
void n_freq(int a[] , int b)        //Defining Function
{
    int i,neg;
    neg=0;
    for(i=0;i<b;i++)\
    {
        if(a[i]<0)
        {
        neg++;
        }

    }
    printf("\n Negative number count :  %d ",neg);

}
void p_freq(int a[] , int b)        //Defining Function
{
    int i,pos;
    pos=0;
    for(i=0;i<b;i++)
    {
        if(a[i]>0)
        {
        pos++;
        }

    }
    printf("\n Positive number count :  %d ",pos);

}