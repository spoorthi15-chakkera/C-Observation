#include<stdio.h>
int main()
{
	int a[6],i,large;
	printf("enter array element:");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	large=a[0];
	for(i=1;i<6;i++)
	{
	if(a[i]>large)
	{
		large=a[i];
	}
	}
	printf("largest element in array=%d",large);
	return 0;
}
