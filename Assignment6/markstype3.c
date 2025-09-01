#include <stdio.h>
void studentmarks(int);
void main ()
{
	int marks;
	printf("Enter the marks");
	scanf("%d",&marks);
	studentmarks(marks);
}
void studentmarks(int a){
	
	if(a>=75)
     {
     	printf("Distinction");
     }
    
     	else{
     		
     		if(a>=65)
     		{
     			printf("First Class");
     			
     		}
     	
			 
			 else{
			 	
			 	if(a>=55)
			 	{
			 		printf("Second Class");
			 		
				 }
			
				 else{
				 	
				 	 if(a>=35)
				 	 {
				 	 	printf("Pass");
					  }
				 	 else {
				 	 	printf("Fail");
					  }
		}
		}
	}
	 
}