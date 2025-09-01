#include <stdio.h>
void main()
{
	int arr[10];
	int i,max,min;
	
	printf(" Enter Elements in array:\n");
	
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	max=min=arr[0];
	for(int i=0;i<10;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		if(arr[i]<min)
		min=arr[i];
	}
	printf("%d=Maximum elemet:\n",max);
	printf("%d=Minimum elemet:\n",min);
	
}