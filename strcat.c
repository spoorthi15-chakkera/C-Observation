#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50],s2[30];
	printf("\nenter string1:");
	gets(s1);
	printf("\nenter string2:");
	gets(s2);
	int i,j;
	i=strlen(s1);
	for(j=0;s2[j] != '\0'; j++,i++)
	{
		s1[i]=s2[j];
	}
	s1[i]='\0';
	printf("\nconcated string is:%s",s1);
	return 0;
}
