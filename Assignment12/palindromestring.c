#include <stdio.h>
#include <string.h>
int main()
{
	char s[50];
	int i,j,flag=1;
	
	printf("Enter a string:");
	scanf("%s",s);
	
	for(i=0;s[i]!='\0';i++);
	i--;
	
	for(j=0;j<i;j++,i--){
		if(s[j]!=s[i]){
			flag=0;
			break;
		}
	}
	if(flag)
	printf("Palindrome\n");
	else 
	printf("Not Palindrome\n");
}