/*15)	Calculate the minimum number of platforms required for a railway station so that no train waits. Given arrival and departure of all trains (in 24Hr format) in separate arrays.
 	  Ex: arr[] = {9.00, 9.40, 9.50, 11.00, 15.00, 18.00}
		dep[] = {9:10, 12.00, 11.20, 11.30, 19.00, 20.00}*/

#include <stdio.h>
#include <stdlib.h>
void read_arr(int arr[],int n)
{
    int i;
    printf("\nEnter arrival times of train : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void read_dep(int dep[],int n)
{
    int i;
    printf("\nEnter departure times of train : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&dep[i]);
    }
}
int findPlatform(int arr[], int dep[], int n)
{


    int plat_needed = 1, result = 1;
    int i = 1, j = 0;


    for (int i = 0; i < n; i++) {

        plat_needed = 1;

        for (int j = i + 1; j < n; j++) {

            if ((arr[i] >= arr[j] && arr[i] <= dep[j]) || (arr[j] >= arr[i] && arr[j] <= dep[i]))
                plat_needed++;
        }

        if(plat_needed > result)
        {
            result = plat_needed;
        }
    }

    return result;
}

int main()
{
    int n;
    printf("\nEnter total number of arrivals and departures of train : ");
    scanf("%d",&n);
    int p_req;
    int arr[100], dep[100];
    read_arr(arr,n);
    read_dep(dep,n);
    p_req  = findPlatform(arr,dep,n);
    printf("\nThe total number of platforms required are : %d",p_req);
    return 0;
}
