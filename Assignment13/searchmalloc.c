#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,i,search,found=0;
	int *arr;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	if (arr==NULL) {
		printf("Memory not allocated!\n");
		return 0;
	}
	printf("Enter %d elements:\n",n);
	for (i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	printf("Enter element to search: ");
	scanf("%d",&search);
	for (i=0;i<n;i++) {
		if (arr[i]==search) {
			printf("Element %d found at position %d\n",search,i+1);
			found=1;
			break;
		}
	}
	if(!found) {
		printf("Element %d not found in array.\n",search);
	}
	free(arr);
	    return 0;
}