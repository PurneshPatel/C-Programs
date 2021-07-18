    #include<stdio.h>
    
    int main() 
        {
       	 int num,i,f,r,sum,temp;
       	 int min,max;
       	 printf("Enter minimum range: ");
       	 scanf("%d",&min);
       	 printf("Enter maximum range: ");
       	 scanf("%d",&max);
       	 printf("Strong numbers in given range are: ");
       	 for (num=min; num <= max; num++) {
       		 temp = num;
       		 sum=0;
       		 while(temp) {
       			i=1;
       			f=1;
       			r=temp%10;
       			while(i<=r) {
       				f=f*i;
       				i++;
       			}
       			sum=sum+f;
       			temp=temp/10;
       		}
       		if(sum==num)
       		           printf("%d ",num);
       	}
       	return 0;
    }
