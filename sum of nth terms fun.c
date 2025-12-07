#include<stdio.h>
int a,b,c;
int series(int n)
{
	if(n==1)
	return a;
	else if(n==2)
	return b;
	else if(n==3)
	return c;
	else
	return series(n-1)+series(n-2)+series(n-3);
}
int main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter three values (a b c): ");
	scanf("%d %d %d",&a,&b,&c);
	printf("%d ",series(n));
	return 0;
}
