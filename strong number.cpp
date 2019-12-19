// Amstrong number..
#include<stdio.h>
main()
{
	int r,i,n,sum=0,fact,temp;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		fact=1;
		for(i=1;i<=r;i++)
		{
			fact=fact*i;
		}
	     sum=sum+fact;
		   n=n/10;
	}
	if(sum==temp)
		printf("\n strong number");
		else
		printf("\n not a strong number");
}
