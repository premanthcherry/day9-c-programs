// counting the number of digits..
#include<stdio.h>
main()
{
	int count=0,r,n;
	printf("enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
	    count++;
		n=n/10;
	}
		printf("\n the count of number:%d",count);
}
