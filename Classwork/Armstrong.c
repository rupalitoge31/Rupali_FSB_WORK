#include <stdio.h>
void main ()
{
	int no=153;
	int temp=no;
	
	while(no>0){
		rem=no%10;
		sum=sum+rem*rem+rem;
		no=no%10;
	}
	if(temp==sum)
	{
		printf("no is armstrong");
		
	}
	else{
		printf("no is not armstrong");
	}
}