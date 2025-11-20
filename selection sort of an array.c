#include<stdio.h>
int main()
{
	int i,j,n,min,temp;
	printf("enter size n:");
	scanf("%d",&n);
    int a[n];
    printf("enter array elements:");
    for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		min=i;
	for(j=i+1;j<n;j++)
	{
		if(a[min]>a[j])
		{
			min=j;
		}
	}
	}
	temp=a[i];
	a[i]=a[min];
	a[min]=temp;
	return 0;
	}
