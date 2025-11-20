#include<stdio.h>
int main()
{
	int a,b;
	char op;
	printf("enter a,b and op values:");
	scanf("%d %d %c",&a,&b,&op);
	switch(op)
	{
		case'+':printf("sum=%d",a+b);
		break;
		case'-':printf("diff=%d",a-b);
		break;
		case'*':printf("multi=%d",a*b);
		break;
		case'/':printf("division=%d",a/b);
		break;
		default:printf("invalid");
	}
	return 0;
}
