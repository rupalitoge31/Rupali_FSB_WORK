#include <stdio.h>
void factorial(int);
void main ()
{
   int no=5;
   factorial(no);
}
void factorial(int a){
   int i=a;
   int fact=1;
   while(i>1)
   {
   	fact=fact*i;
   	i--;
	}
	printf("fact of %d is %d",a,fact);
}