#include <stdio.h>
#include <string.h>
int main() {
	char str[100];
	int i;
	char ch,symbol;

	printf("Enter a string:");
	scanf("%s",str);

	fflush(stdin);
	
	printf("Enter the character to replace\n:");
	scanf("%c",&ch);
	
	fflush(stdin);
	
	printf("\nEnter the symbol\n:");
	scanf("%c",&symbol);

	for(i=0; str[i]!='\0'; i++) {
		if(str[i]==ch) {
			str[i]=symbol;
		}
	}
	printf("Modified string %s\n",str);
}