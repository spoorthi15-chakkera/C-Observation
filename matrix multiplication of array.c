#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],d[2][2],r,c,k;
	printf("enter the elements of A matrix:");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
	printf("enter the elements of B matrix:");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			scanf("%d",&b[r][c]);
		}
	}
	printf("resultant matrix of C:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			d[r][c]=0;
			for(k=0;k<2;k++)
			{
				d[r][c]=d[r][c]+a[r][k]*b[k][c];
			}
		}
	}
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%d\t",d[r][c]);
		}
		printf("\n");
	}
	return 0;
}
