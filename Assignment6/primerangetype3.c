#include <stdio.h>
void primeno(int);
void main() {
	
	int i;
	primeno(i);
}
	void primeno(int a){
	
	
	for(int no=2; no<=10000; no++) {
		int flag=0;


		for(a=2; a<=no/2; a++) {
			if(no==0) {

				flag=1;
				break;
			}
		}

		if (flag==0) {
			printf("%d is prime\n",no);
		}
	}

}
