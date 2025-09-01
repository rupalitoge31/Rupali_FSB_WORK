#include <stdio.h>
void main()
{
	int start ,end;
	printf("Enter the number");
	scanf("%d %d",&start,&end);
	startend();
}
void startend(){
	if(start > end){
		int temp=start;
		start=end;
		end=temp;
	}
	for (int n=start;n<=end;++n){
		
	}
}