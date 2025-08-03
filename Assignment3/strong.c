#include <stdio.h>
void main ()
{
	int no=145;
	int r,sum=0;
	int temp=no;
	int i,fact;
	
	while (temp!=0){
		fact=1;
		r=temp%10;
		for (i=1;i<=r,i++;){
			fact=fact*i;
		}
		sum=sum+fact;
		temp=temp/10;
    }
	if (sum==no){
		printf("strong");
	}
	else{
		printf("not strong");
	}
	
	
}