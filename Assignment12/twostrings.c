#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100];
	char s2[100];
	int len1,len2;
	
	printf("Enter first string: ");
	scanf("%s",s1);
	
	printf("Enter second string: ");
	scanf("%s",s2);
	
	len1=strlen(s1);
	len2=strlen(s2);
	
	if(len1>len2){
		printf("Larger string:%s",s1);
	}
	else if(len2>len1){
		printf("Larger string:%s",s2);
	}
	else
	printf("Both strings are equal in length");
}