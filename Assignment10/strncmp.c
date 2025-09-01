#include <stdio.h>
#include <string.h>
int main()
{
	char str1[]="Hello";
	char str2[]="Hero";
	strncmp(str1,str2,2);
	
	printf("strncmp result=%d\n",strncmp(str1,str2,2));
}