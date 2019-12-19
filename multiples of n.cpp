// while loop demo 
#include<stdio.h>
main()
{
	int i,n;
	i=1;
	printf("enter the multiples of value:");
	scanf("%d",&n);
	while(i<=20)
	{
		printf("\n %dX%d=%d",n,i,i*n);
        i++;
	}
}
