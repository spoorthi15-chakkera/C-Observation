#include<stdio.h>
#include<string.h>
int main()
{
	char a[20]="Program";
	char b[20]={'P','r','o','g','r','a','m','\0'};
	printf("length of the string a=%d\n", strlen(a));
	printf("length of the string b=%d\n", strlen(b));
	return 0;
}
