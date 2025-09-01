#include <stdio.h>
#include <string.h>
int main()
{
	char str[50];
	int len;
	
	printf("Enter a string");
	scanf("%s",str);
	
	len=strlen(str);
	
	if(len>1){
		char temp= str[0];
		str[0]=str[len-1];
		str[len-1]=temp;
	}
	printf("After swapping:%s\n",str);
}