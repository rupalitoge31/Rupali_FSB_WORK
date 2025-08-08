#include <stdio.h>
void main() {
	int no,i,flag=0;
	for(int no=2; no<=10000; no++) {
		flag=0;


		for(i=2; i<=no/2; i++) {
			if(no%i==0) {

				flag=1;
				break;
			}
		}

		if (flag==0) {
			printf("%d is prime\n",no);
		}
	}

}
