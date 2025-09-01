#include <stdio.h>
#include <string.h>
int main()
{
	char str[50];
	int i;
	
	printf("Enter the string: ");
	scanf("%s",str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='a')
		str[i]='$';
	}
	printf("Replaced string %s\n",str);
}