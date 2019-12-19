// sum of digits..
#include<stdio.h>
main()
{
	int r,n,sum=0,temp;
	printf("enter the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
	   sum=(sum*10)+r;
		n=n/10;
	}
	if(sum==temp)
		printf("\n palindrome..");
		else
		printf("\n not a palindrome..");
}
