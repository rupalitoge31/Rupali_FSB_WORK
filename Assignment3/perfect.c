#include <stdio.h>
void main()
{
	int no=28,sum=0;
	int i;
	
	for (i=1;i<no;i++){
		if (no%i==0){
			sum=sum+i;
		}
	}
	if(sum==no){
		printf("Perfect");
	}
	else{
		printf("Not Perfect");
	}
}