#include <stdio.h>
void vowel(char);
void main()
{
	char ch='i';
//	printf("Enter the alphabate");
//	scanf("%d",&ch);
	vowel(ch);
}
void vowel(char ch)
{
   if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("ch is vowel");
	}
	 else {
	 	printf("ch is consonant");
	 }
}