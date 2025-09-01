#include <stdio.h>
#include <string.h>
int main()
{
	char str[70],result[70];
	int i,j=0;
	
	printf("Enter a string:");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		if(i%2==0){
		result[j++]=str[i];
	}
	}
	printf("After removing odd index chracters:%s\n",result);
}