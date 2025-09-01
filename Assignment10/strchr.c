#include <stdio.h>
#include <string.h>
int main()
{
	char str[]="Hello World";
	char *ptr=strchr(str,'o');
	
	
	printf("First occurance of 'o':%s\n",ptr);
}