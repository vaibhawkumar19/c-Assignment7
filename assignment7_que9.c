//9. Write a program to check whether a given number is an Armstrong number or not
//153=1cube+5cube+3cube
#include<stdio.h>
int main()
{
	int n,r,arm=0,tmp;
	printf("enter the no ");
	scanf("%d",&n);
	tmp=n;
	while(n!=0)
	{
		r=n%10;
		arm=arm+(r*r*r);
		n=n/10;
	}
	if(tmp==arm)
		printf("armstrong number %d",arm);
	else
		printf("not armstrong number %d",arm);
	return 0;
}

