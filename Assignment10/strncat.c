#include <stdio.h>
#include <string.h>
int main()
{
	char str1[30]="Rupali";
	char str2[]="Toge";
	strncat(str1,str2,4);
	
	
	printf("Concatenated first 3 chars:%s\n",str1);
}