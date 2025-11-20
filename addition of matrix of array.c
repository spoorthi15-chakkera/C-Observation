#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],sum[10][10];
	int r,c;
	printf("enter elements into a:");
	for(r=0;r<3;r++)
	{
     for(c=0;c<3;c++)
     {
     	scanf("%d",&a[r][c]);
	 }
	}
	printf("enter elements into b:");
	for(r=0;r<3;r++)
	{
     for(c=0;c<3;c++)
     {
     	scanf("%d",&b[r][c]);
	 }
	}
	printf("result of the matrix");
	for(r=0;r<3;r++)
	{
     for(c=0;c<3;c++)
     {
     	sum[r][c]=a[r][c]+b[r][c];
	 }
	 printf("\n");
	}
	return 0;
}
