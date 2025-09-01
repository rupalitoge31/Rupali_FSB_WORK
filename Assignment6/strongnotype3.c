#include <stdio.h>
void strongno(int);
void main ()
{
	int no=145;
	strongno(no);
}
void strongno(int a){
    int r,sum=0;
	int temp=a;
	
	while (temp!=0){
		int fact=1;
		r=temp%10;
		
		for (int i=1;i<=r;i++){
	
			fact=fact*i;
		}
		sum=sum+fact;
		temp=temp/10;
    }
	if (sum==a){
		printf("strong");
	}
	else{
		printf("not strong");
	}
	
	
}