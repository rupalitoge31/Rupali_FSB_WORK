#include <stdio.h>
void primeno(int);
void main ()
{
	int no=7;
	primeno(no);
}
void primeno(int a){
     int i=2,flag=0;
     
	 while(i<=a/2)
	 {
	 	if(a%i==0)
	 	{
	 		printf("a is not prime");
	 		flag=1;
	 		break;
		 }
		 i++;
	 }
	 if (flag==0){
	 	printf("prime");
	 }
	 else {
	 	printf("not prime");
	 }
}