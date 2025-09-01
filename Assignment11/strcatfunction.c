#include <stdio.h>
#include <string.h>
char* mystrcat(char*,char*);
int main()
{
	char str1[30]="Rupali";
	char str2[]="Toge";
	mystrcat(str1,str2);
	
	
	printf("Concatenated string:%s\n",str1);
}
 char* mystrcat(char* str1,char* str2)
{
	int i=0,j=0;
	
	while(str1[i]!='\0'){
		i++;
	}
	while (str2[j]!='\0'){
		str1[i]=str2[j];
		i++;
		j++;
	}
	
	
	
	
	return str1;
}