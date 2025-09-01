#include <stdio.h>
void Armstrongno(int);
void main() {
	int no=153;
	Armstrongno(no);
}
void Armstrongno(int a){
int r,sum=0;
	int temp=a;

while (temp!=0) {
	
	r=temp%10;
	sum=sum+r*r*r;
	temp=temp/10;
}
if (sum==a) {
	printf("Armstrong");
} else {
	printf(" not Armstrong");
}
}