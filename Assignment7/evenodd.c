#include <stdio.h>
evenodd(int*);
void main()
{
	int no=7;
	evenodd(&no);
}
evenodd(int*no){
	if(*no%2==0){
		printf("even");
	}
	else{
		printf("odd");
	}
	
}