#include <stdio.h>
int main()
{
	int start;
	int end;
	
	printf("Enter start of the range for odd num");
	scanf("%d",&start);
	printf("Enter end of the range for odd num");
	scanf("%d",&end);
	
	printf("Enter start of the range for even num");
	scanf("%d",&start);
	printf("Enter end of the range for even num");
	scanf("%d",&end);
	
	
	printf("odd\n");
	for(int i=start;i<=end;i++)
	{
		
	if( i%2!=0){
		printf(" %d\n",i);
	}	
	
	}
	printf("even\n");
	for(int i=start;i<=end;i++){
		
		if(i%2==0){
			printf(" %d\n",i);
		}
	}
}
