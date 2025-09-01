#include <stdio.h>
void greaterno(int,int,int);
void main ()
{
	int a=40;
	int b=20;
	int c=10;
	greaterno(a,b,c);
}
void greaterno(int x,int y,int z){

	if (x>y){
		
		if (x>z){
			printf("a is greater");
		}
		else{
			printf("c is greater");
		}
		
    }
     else{
     	
     	if (y>z){
     		printf("b is greater");
		 }
		 else{
		 	printf("c is greater");
		 }
	 }
	 
}