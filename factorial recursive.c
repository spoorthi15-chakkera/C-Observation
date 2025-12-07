#include<stdio.h>
int fact(int n);
int main()
{
	int n,res;
	printf("\nenter the number:");
	scanf("%d",&n);
	res=fact(n);
	printf("\nthe factorial of is %d\n",n,res);
	return 0;
}
int fact(int n)
{
	if(n<=1)
		return 1;
	else
		return n*fact(n-1);
}
