// print the reverse number
#include<stdio.h>
main()
{
	int r,n;
	printf("enter the number:");
	scanf("%d",&n);
	printf("\n reverse number is:");
	while(n>0)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
}
