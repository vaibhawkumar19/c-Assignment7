//5. Write a program to check whether two given numbers are co-prime numbers or not
//co-prime:- 4 6 8 9 10 12 14 15 16..............
#include<stdio.h>
int main()
{
	int i,n,m,hcf;
	printf("enter two no ");
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		if(n%i==0 && m%i==0)
			hcf=i;
	}
	if(hcf==1)
		printf("co-prime no");
	else
		printf("not co-prime no");
}
