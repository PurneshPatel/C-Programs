#include<stdio.h>

int sumavg(int a[],int n)
{
   int i,total=0,avg;
    for (i = 0; i < n; i++)
    {
        total+=a[i];
    }
    avg = total / n;
    printf("\nSum : %d\n", total);
    printf("Average : %d\n", avg);
 
}
int minmax(int a[],int n)
 {
 	int min,max,i;
 	min=max=a[0];
    for(i=1; i<n; i++)
    {
       if(min>a[i])
		  min=a[i];   
	   if(max<a[i])
          max=a[i];       
    }
 	printf("Minimum : %d",min);
    printf("\nMaximum : %d",max);
 }
int main()
{
    int a[10],i,n;
   
    printf("\nEnter size of the array : ");
    scanf("%d", &n);
 
    printf("\nEnter elements in array : ");
    for(i=0; i<n; i++)
    {
 		scanf("%d",&a[i]);
    }
    minmax(a,n);
    sumavg(a,n);
    return 0;
    }
