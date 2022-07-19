//1. Write a program to find the Nth term of the Fibonnaci series.
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144.
//8th term is 13.
#include<stdio.h>
int main()
{
	int i,fib,num;
	printf("enter the no ");
	scanf("%d",&num);
	int a = -1, b = 1, c;
    for ( i = 1; i <= num; i++)
    {
        c = a + b; // stores previous 2 values of the series i.e. a and b
        a = b;     //copy previous number to its previous number
        b = c;     //copy sum (c) to first previous number
    }
    printf("%d",b);
    
}
