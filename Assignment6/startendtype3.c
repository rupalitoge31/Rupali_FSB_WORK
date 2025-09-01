#include <stdio.h>
void startend(int,int);
int main()
{
	int start=1;
	int end=5;
	startend(start,end);
}
void startend(int a,int b){
    int sum=0;
	for(int i=a;i<=b;i++){
		sum += i;
	}
	printf("Sum from %d to %d is %d\n",a,b,sum);
}