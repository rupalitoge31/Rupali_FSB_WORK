#include <stdio.h>
void main(){
	int units,bill=0;
	printf("Enter the units");
	scanf("%d",&units);
	
	if(units>1 && units<50){
		bill=units*30;
		
	}
	else if(units>51 &&units<150){
		bill=units*40;
	}
	else if(units>151){
		bill=units*50;
	}
	printf("%d",bill);
	
}