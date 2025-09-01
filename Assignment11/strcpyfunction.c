#include <stdio.h>
#include <string.h>
char* mystrcpy(char*,char*);
int main()
{
	char str1[10]="Rupali";
	char str2[10];
char* p = mystrcpy(str2,str1);
	
	
	printf("%s\n",str2);
		printf("%s\n",p);
}
 char* mystrcpy(char* str2,char* str1)
{
	int i=0;
	
	while(str1[i]!='\0'){
		str2[i]=str1[i];
		i++;
	}
	
	
	
	
	
	return str2;
}