#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,D,root1,root2,realpart,imagepart;
	printf("enter coefficients a,b and c:");
	scanf("%lf %lf %lf",&a,&b,&c);
	D=b*b-4*a*c;
	if(D>0)
	{
		root1:(-b+sqrt(D))/(2*a);
		root2:(-b-sqrt(D))/(2*a);
		printf("root1=%.2lf,root2=%.2lf",root1,root2);
	}
	else if(D==0)
	{
		root1=root2=-b/(2*a);
		printf("root1=root2=%.2lf",root1);
	}
	else
	{
		realpart=-b/(2*a);
		imagepart=sqrt(-D)/(2*a);
		printf("root1=%.2lf+%.2lf i and",realpart,imagepart);
		printf("root2=%.2lf-%.2lf i",realpart,imagepart);
	}
	return 0;
}
