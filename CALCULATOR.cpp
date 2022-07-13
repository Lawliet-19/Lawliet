#include<stdio.h>
#include<math.h>
int main()
{
	int Sum,Difference,Multiplication,Division,a,b,choice;
    printf("Choose any one of the following\n");
    printf("\n1.sum\n2.difference.\n3.Multiplication\n4.Division\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    
     printf("enter first number\n");
	 scanf("%d",&a);
	 printf("enter second number\n");
	 scanf("%d",&b);
    		
	   if(choice==1)
    {
    	Sum=a+b;
    	printf("sum : %d\n",Sum);	
	}
	 else if(choice==2)
    {
    	Difference=a-b;
    	printf("Difference : %d\n",Difference);	
	}
	 else if(choice==3)
    {
    	Multiplication=a*b;
    	printf("Multiplication : %d\n",	Multiplication);	
	}
	 else if(choice==4)
    {
    	Division=a/b;
    	printf("Division : %d\n",Division);	
	}
    	
	return 0;
}
