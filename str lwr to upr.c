#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	int i;
	printf("\nEnter any String: ");  
	gets(s1);
	strcpy(s2,s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='a' && s1[i]<='z')
		{
			s1[i]=s1[i]-32;
		}
	}
		printf("upper case=%s\n",s1);
    strcpy(s1,s2);
		for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='A' && s1[i]<='Z')
		{
			s1[i]=s1[i]+32;
		}
	}printf("lower case=%s\n",s1);
	strcpy(s1,s2);
	for(i=0;s1[i]!='\0';i++)
	{
		if((s1[i]>='a' && s1[i]<='z') || (s1[i]>='A' && s1[i]<='Z'))
	{
	        if(s1[i]>='a' && s1[i]<='z')
			{
				s1[i]=s1[i]-32;
}
			else
			{
				s1[i]=s1[i]+32;
			}
	} }
	printf("toggle case =%s\n",s1); 
	strcpy(s1,s2);
	if(s1[0]>='a'&& s1[0]<='z')
	{
		s1[0]=s1[0]-32;
	}
	for(i=1;s1[i]!='\0';i++)
	{
		if(s1[i]>='A' && s1[i]<='Z')
		{
			s1[i]=s1[i]+32;
		}
	} printf("sentential case=%s\n",s1);
	return 0;
}

	

