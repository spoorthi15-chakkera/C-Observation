#include<stdio.h>
int main()
{
	char s1[100];
	int lwr,upr,vow,cons,digit,symbol,i;
	lwr=upr=vow=cons=digit=symbol=0;
	printf("\nenter any string:");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if((s1[i]>='a' && s1[i]<='z') || (s1[i]>='A' && s1[i]<='Z'))
		{
		 if(s1[i]>='a' && s1[i]<='z')
		 {
		  lwr++; 	
		 }
		 else
		 {
		 	upr++;
		 }
		 switch(s1[i])
		 {
		 	case 'a':
		    case 'A':
		    case 'e':
		    case 'E':
			case 'i':
			case 'I':
			case 'o': 	
		    case 'O':
		    case 'u':
			case 'U':
			vow++;
			break;
			default:cons++;	
		 }
		}
		else if(s1[i]='0' && s1[i]<='9')
		{
			digit++;
		}
		else
		{
			symbol++;
		}
	}
	printf("vowels=%d\n",vow);
	printf("consonants=%d\n",cons);
	printf("lower case=%d\n",lwr);
	printf("upper case=%d\n",upr);
	printf("digits=%d\n",digit);
	printf("symbols=%d\n",symbol);
	return 0;
}
