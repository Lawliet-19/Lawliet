#include <stdio.h>
#include <conio.h>
int main()
{
	int a,r,sum=0,temp;
	printf("Enter any element to check if the number is palindrome or not\n");
	scanf("%d",&a);
	temp=a;
	while(a>0)
	{
		r=a%10;
		sum=(sum*10)+r;
		a=a/10;
	}
	if(temp==sum)
	printf("this number is palindrome");
	else
	printf("this number is not palindrome");
	return 0;
}
