//4. Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
	int i,a,b,h;
	printf("enter the two no ");
	scanf("%d %d",&a,&b);
	h=a>b?a:b;
	for(h;h>=1;h--)
	{
		if(a%h==0 && b%h==0)
			break;
	}
	printf("%d",h);

}
