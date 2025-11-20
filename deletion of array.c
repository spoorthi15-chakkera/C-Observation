#include<stdio.h>
int main()
{
	int i,position,n;
	int a[n];
	printf("enter an elements:");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position of the element to delete:");
	scanf("%d",&position);
	for(i=position-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
	for(i=0;i<n;i++)
	{
		printf("%d",&n);
	}
	return 0;
}
