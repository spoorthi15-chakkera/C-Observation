#include<stdio.h>
int main()
{
	float base,height,area;
	printf("enter base and height of triangle:");
	scanf("%f %f",&base,&height);
	area=(base*height)/2;
	printf("area=%f",area);
	return 0;
}
