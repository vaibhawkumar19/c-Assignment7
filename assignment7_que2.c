//2. Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
	int i,a=-1,b=1,c;
	int n;
	printf("enter the no ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	return 0;
}
