#include <stdio.h>
void swap(int*,int*);
void main ()
{
	int a=10,b=20;
	printf("Before swapping a=%d and b=%d\n",a,b);
	swap(&a,&b);
	printf("After swapping a=%d and b=%d\n",a,b);
}
void swap(int*x,int*y)
{
   int temp=*x;
   *x=*y;
   *y=temp;
   
}
