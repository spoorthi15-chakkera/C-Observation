#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="Hello,World!";
	printf("Original string:%s\n",str);
	strlwr(str);
	printf("lowercase string:%s\n",str);
	return 0;
}
