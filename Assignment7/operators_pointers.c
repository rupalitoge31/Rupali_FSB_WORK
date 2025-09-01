void operators(double*);
void main(){
	int a,b;
	
	char op;
	
	printf("Enter First number :");
	scanf("%lf ",&a);
	
	printf("Enter a op (+,-,*,/,%) :");
	scanf("%c ",&op);
	
	printf("Enter second number :");
	scanf("%lf ",&b);
	operators(&op);
}
void operators(double* a){
	double result;
	if (*a=='+'){
		result;
		printf("Result:%lf",result);
	}
	else if(*a=='-'){
		result;
		printf("Result:%lf",result);
	}
	
	else if (*a=='/'){
		
			result;
			printf("Result:lf",result);
		}
		
	
	else if (*a=='%'){
		
			result;
			printf("Result:lf",result);
		
	}
}
