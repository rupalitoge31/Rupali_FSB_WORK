#include <stdio.h>
void perfectno(int);
void main()
{
	int no=28;
	perfectno(no);
}
void perfectno(int a){
     int sum=0;
	  int i;
	for (i=1;i<a;i++){
		if (a%i==0){
			sum=sum+i;
		}
	}
	if(sum==a){
		printf("Perfect");
	}
	else{
		printf("Not Perfect");
	}
}