#include<stdio.h>
int main()
{
	int a[10][10],trans[10][10];
	int rows,cols,i,j;
	printf("enter num of rows:");
	scanf("%d", &rows);
	printf("enter num of cols:");
	scanf("%d", &cols);
	printf("enter elements of the matrix:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			trans[j][i]=a[i][j];
		}
	}
	printf("\nOriginal matrix:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n Transpose of the matrix:\n");
	for(i=0;i<cols;i++)
	{
		for(j=0;j<rows;j++)
		{
			printf("%d",trans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
