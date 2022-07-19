//7. Write a program to print all Prime numbers between two given number
#include<stdio.h>
int main()
{
	int a,b,i,n;
	printf("enter two number to print between all prime no ");
	scanf("%d %d",&a,&b);
	for(n=a;n<=b;n++)
	{
		for(i=2;i<=n-1;i++)
		{
			if(n%i==0)
				break;
		}
		if(n==i)
			printf("%d ",n);
	}
	return 0;
}
