#include<stdio.h>
int main()
{
	int ppsc,maths,beee,ecse,uhv,total;
	float avg;
	printf("enter the 5 subjects marks:");
	scanf("%d %d %d %d %d",&ppsc,&maths,&beee,&ecse,&uhv);
	system("class");
	printf("\nppsc=%d",ppsc);
	printf("\nmaths=%d",maths);
	printf("\nbeee=%d",beee);
	printf("\necse=%d",ecse);
	printf("\nuhv=%d",uhv);
	total=ppsc+maths+beee+ecse+uhv;
	printf("\ntotal=%d",total);
	avg=total/5;
	printf("\navg=%f",avg);
	return 0;
}
