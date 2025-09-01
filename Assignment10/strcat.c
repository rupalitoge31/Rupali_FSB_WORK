#include <stdio.h>
#include <string.h>
int main()
{
	char str1[30]="Rupali";
	char str2[]="Toge";
	strcat(str1,str2);
	
	
	printf("Concatenated string:%s\n",str1);
}