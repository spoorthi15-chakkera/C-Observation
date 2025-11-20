#include<stdio.h>
int main()
{
	char str[100];
	int length,i;
	printf("\nenter the string:");
	gets(str);
	length=0;
	for(i=0;str[i] != '\0';i++)
	{
		length++;
	}
	printf("\nlength of the string is:%d",length);
	return 0;
}
