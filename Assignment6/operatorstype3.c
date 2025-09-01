#include <stdio.h>
void operators(double);
void main(){
	int a,b;
	
	char op;
	
	printf("Enter First number :");
	scanf("%lf ",&a);
	
	printf("Enter a op (+,-,*,/,%) :");
	scanf("%c ",&op);
	
	printf("Enter second number :");
	scanf("%lf ",&b);
	operators(op);
}
void operators(double a){
	double result;
	if (a=='+'){
		result;
		printf("Result:%lf",result);
	}
	else if(a=='-'){
		result=a-b;
		printf("Result:%lf",result);
	}
	
	else if (a=='/'){
		if(b!=0){
			result=a/b;
			printf("Result:lf",result);
		}else{
			printf("Division by zero is not allowed:\n");
		}
	}
	else if (a=='%'){
		if(b!=0){
			result=(int)a%(int)b;
			printf("Result:lf",result);
		}else{
			printf("Module is not allowed:\n");
		}	
	}
	else{
		printf("Invalid syntax is Entered:\n");
	}
}
