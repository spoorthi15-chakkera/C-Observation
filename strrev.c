#include<stdio.h>
int main()
{
	char s1[20];
	int i,len;
	printf("reverse the string");
	printf("\nenter the string:");
	scanf("%[^\n]s",&s1);
	while(s1[i]!='\0')
	{
		len=len+1;
		i++;
	}
	for(i=len-1;i>0;i--)
	{
		printf("%c",s1[i]);
	}
	return 0;
}
