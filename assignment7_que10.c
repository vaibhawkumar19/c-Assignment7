//10. Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
int main()
{
	int i,r,arm,tmp,count=0;
	printf("enter the no ");
	for(i=1;i<=1000;i++)
	{
		tmp=i;
		arm=0;
		while(tmp>0)
		{
			r=tmp%10;
			arm=arm+(r*r*r);
	  		tmp=tmp/10;
		}
	
	if(arm==i)
	{
	
		printf("\n%d",i);
		count++;
	}
}
return 0;
}

