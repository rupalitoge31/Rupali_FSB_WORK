#include <stdio.h>
#include <string.h>
int mystrlen(char str[]);
int main()
{
	char str[50];
	printf("Enter a string: ");
	scanf("%s",str);
	
	
	printf("Length of string:%d\n",mystrlen(str));
	return 0;
}
int mystrlen(char str[]){
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	return i;
	
}