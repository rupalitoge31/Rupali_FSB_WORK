#include <stdio.h>
void main ()
{
	int start,end;
	printf("Enter start and end of range: ");
	scanf("%d %d",&start,&end);
	
	for( int num=start;num<=end;num++){
		printf("%d = ",num);
		
		for(int i=1;i<=num;i++){
			if(num %i==0){
				printf("%d",i);
				if(i!=num){
					printf(", ");
				}
			}
			printf("\n");
		}
	}
}