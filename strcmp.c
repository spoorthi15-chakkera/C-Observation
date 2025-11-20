#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50],s2[30];
	int i,j,flag=0;
	printf("\nenter string1:");
	gets(s1);
	printf("\nenter string2:");
	gets(s2);
	for(i=0;j=0;s1[i]!='\0' && s2[j]!='\0';i++,j++)
	{
		if(s1[i]!=s2[j])
		{
			flag++;
			break;
		}
	}
	if(flag==0)
	printf("\ntwo strings are equal");
	else
	printf("\ntwo strings are not equal");
	return 0;
}
