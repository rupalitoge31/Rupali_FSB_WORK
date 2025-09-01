#include <stdio.h>
#include <string.h>
typedef struct Book
{
	char name[10];
	int id;
	char author[10];
	double price;
}Book;
void main()
{
	Book b;
	
	printf("Enter the name id author price:\n");
	scanf("%s\n",&b.name);
	scanf("%d\n",&b.id);
	scanf("%s\n",&b.author);
	scanf("%lf\n",&b.price);
	
	printf("\nName=%s ID=%d Author=%s Price=%lf\n",b.name,b.id,b.author,b.price);
}