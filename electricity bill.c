#include<stdio.h>
int main()
{
	int units;
	float amount,charge,total;
	printf("enter no.of units");
	scanf("%d",&units);
	if (units<=50)
	{
		amount=units*2.50;
		charge=30;
	}
	else if (units<=100)
	{
		amount=units*3.00;
		charge=50;
	}
	else if (units<=200)
	{
		amount=units*3.50;
		charge=75;
	}
	else
	{
		amount=units*5;
		charge=100;
	}
		total=amount+charge;
		printf("electricity bill=%.2f",total);
	return 0;
}
