//6. Write a program to print all Prime numbers under 100
#include<stdio.h>
int main()
{
	int n,i;
	for(n=1;n<=100;n++)
	{
		for(i=2;i<=n-1;i++){
			if(n%i==0)
			break;
	}
	if(n==i)	
		printf("%d ",n);
	}
	return 0;
}
