#include<stdio.h>
int main()
{
	int n,tem,rem,arm=0;
	printf("enter a number'n':");
	scanf("%d",&n);
	tem=n;
	while(n!=0)
	{
		rem=n%10;
		arm=arm+rem*rem*rem;
		n=n/10;
	}
	if(arm==tem)
	printf("%d is an armstrong number",n);
	else
	printf("%d is not an armstrong number",n);
	return 0;
}
