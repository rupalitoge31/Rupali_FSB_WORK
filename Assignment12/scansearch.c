#include <stdio.h>
#include <string.h>
int main()
{
   char str[100],ch;
   int i,found=0;
   
   printf("Enter a string: ");
   scanf("%s",str);
   
   printf("Enter a character to search: ");
   scanf(" %c",&ch);
   
   for(i=0;str[i]!='\0';i++){
   	if(str[i]==ch){
   		printf(" character %c found at position %d\n: ",ch,i+1);
   		found=1;
	   }
   }
   if(!found)
   printf(" character %c not found\n: ",ch);	
}