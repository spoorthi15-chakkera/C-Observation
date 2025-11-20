#include<stdio.h>
int main()
{
	float length,breadth,area;
	printf("enter length & breadth of a rectangle:");
	scanf("%f %f",&length,&breadth);
	area=length*breadth;
	printf("area=%f",area);
	return 0;
}
