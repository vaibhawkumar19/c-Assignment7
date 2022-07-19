//. Write a program to check whether a given number is there in the Fibonacci series or not.
#include<stdio.h>
int main()
{
	int a=-1,b=1,c,i,n;
	printf("enter any number ");
	scanf("%d",&n);
	if(n==a || n==b)
		printf("Fibonacci number");
	else
		c=a+b;
	while(c<n)
	{
		c=a+b;
		a=b;
		b=c;
	}
	if(n==c)
		printf("Fibonacci number %d",n);
	else
		printf("not fiblnacci number %d",n);
	return 0;		
}
