// Amstrong number..
#include<stdio.h>
main()
{
	int r,n,sum;
	printf("enter the three digit number:");
	scanf("%d",&n);
    int	temp=n;
	while(n>0)
	{
		r=n%10;
	   sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==temp)
		printf("\n Amstrong number");
		else
		printf("\n not a Amstrong number");
}
