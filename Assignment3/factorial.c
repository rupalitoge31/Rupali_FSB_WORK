#include <stdio.h>
void main ()
{
   int no=5;
   int i=no;
   int fact=1;
   
   while(i>1)
   {
   	fact=fact*i;
   	i--;
	}
	printf("fact of %d is %d",no,fact);
}