#include <stdio.h>
#include <string.h>
int main()
{
	char str1[20]="Rupali";
	char str2[20];
	strcpy(str2,str1);
	
	printf("Copied string:%s\n",str2);
}