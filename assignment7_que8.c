//8. Write a program to find next Prime number of a given number
//Auther name:-Vaibhaw Kumar
#include<stdio.h>
int main()
{
	int i,n,a;
	printf("enter any number:- ");
	scanf("%d",&a);
	for(n=a+1;;n++)
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
				break;
		}
		if(i==n)
			break;
	}
	printf("the next prime number %d is %d ",a,i);
	return 0;
}
