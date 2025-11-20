#include<stdio.h>
int main()
{
	int num,sum=0,digit;
	printf("enter a 5 digit number");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}
	printf("digit sum=%d",sum);
	return 0;
}
