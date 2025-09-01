#include <stdio.h>
#include <string.h>
int main()
{
	char str1[]="Coding";
	char str2[20];
	strncpy(str2,str1,3);
	str2[3]='\0';
	
	printf("Copied  first 3 chracters:%s\n",str2);
}