/*7) Income tax department will collect the tax from the tax payers all around the Nation.
 For the financial year 2019-20, assume that the Income tax department has collected the
 tax from N number of tax payers. Help the Income tax department to do the followings
i)	Calculate the total number of tax payers who paid tax more than 2.5 lakhs .
ii)	Calculate the total number of tax payers who paid tax between 50000 rupees to 150000
rupees.
iii)Calculated the average tax collected.
*/
#include <stdio.h>
#include <stdlib.h>

struct tax_pay
{
    int tno;
    int tax;
}tp[100];

void read_tax_payer(struct tax_pay[],int );
void calc_above_twopointfive(struct tax_pay[],int);
void calc_betw_fifty_onefifty(struct tax_pay[],int);
void calc_average_tax(struct tax_pay [] ,int );


int main()
{
    int n;
    printf("\n Enter the total number of taxpayers : ");
    scanf("%d",&n);


    read_tax_payer(tp,n);
    calc_above_twopointfive(tp,n);
    calc_betw_fifty_onefifty(tp,n);
    calc_average_tax(tp,n);
    return 0;
}
void read_tax_payer(struct tax_pay tp[],int b)
{
    int i,j;
    for(i=0,j=1;i<b;i++,j++)
    {
        printf("\nEnter the tax amt of taxpayer %d :  \n",j);
        scanf("%d",&tp[i].tax);
        tp[i].tno = j;
    }
}
void calc_above_twopointfive(struct tax_pay tp[],int b)
{
    int i,tp_25,count;
    count = 0;

    printf("\n Tax payers paying above 250000 are : \n \n");

    for(i=0;i<b;i++)
    {
       if(tp[i].tax > 250000)
       {
           tp_25 = tp[i].tno;
           printf("\n Taxpayer number :  %d \n",tp_25);
           count++;
       }
   }
   printf("\n Total people paying tax above 250000 are : %d \n ",count);
}
void calc_betw_fifty_onefifty(struct tax_pay tp[],int b)
{
    int i,tp_25,counts;
    counts = 0;

    printf("\n Tax payers paying between 50000 and 150000 are : \n \n");

    for(i=0;i<b;i++)
    {
       if(tp[i].tax > 50000 && tp[i].tax < 150000)
       {
           tp_25 = tp[i].tno;
           printf("\n Taxpayer number :  %d \n",tp_25);
           counts++;
       }
   }
   printf("\n Total people paying tax between 50000 and 150000 are : %d \n ",counts);
}
void calc_average_tax(struct tax_pay tp[],int b)
{
    int i;
    int sum = 0;
    float average= 0.0;

    for(i=0;i<b;i++)
    {
        sum = sum + tp[i].tax;
    }
    average = (float)sum/b;
    printf("\n The total tax collected was : %d ",sum);
    printf("\n The average tax collected was  : %0.2f ",average);
}
