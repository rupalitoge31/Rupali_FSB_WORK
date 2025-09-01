#include <stdio.h>
void traingle(int,int,int);
int main ()
{
	int a=3;
	int b=3;
	int c=3;
	traingle(a,b,c);
}
void traingle(int x,int y,int z)
{
    if (x==y && y==z)
	{
		printf("Equilateral Traingle");
	}
	else if(x==y||y==z||x==z)
	{
		printf("Isosceles Traingle");
	}
	else {
		printf("scalene Traingle");
	}
}