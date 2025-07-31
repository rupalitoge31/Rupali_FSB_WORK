#include <stdio.h>
int main()
{
	int a=20,b=30;
	char op='+';
	
	if (op=='+'){
		printf("Addition=%d",a+b);
	}
	else if(op=='-'){
		printf("Substraction=%d",a-b);
	}
	else if(op=='*'){
		printf("Multiplication=%d",a*b);
	}
	else if (op=='/'){
		printf("Division=%d",a/b);
	}
	else if (op=='%'){
		printf("Modulus=%d",a%b);
	}
	else{
		printf("Invalid Operator");
	}
}