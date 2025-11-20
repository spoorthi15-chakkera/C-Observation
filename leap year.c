#include<stdio.h>
int main()
{
	int year;
	printf("enter year value");
	scanf("%d",&year);
	if(((year %4==0)&&(year %100!=0))||(year %400==0))
	printf("the year is leap year");
	else
	printf("not a leap year");
	return 0;
}
