#include <stdio.h>
#include <conio.h>
int main()
{
	int n,reverse=0,rem;
	printf("enter a number for reverse\n");
	scanf("%d",&n);
	 
	while(n!=0)
	{
		rem = n%10;
		reverse = reverse*10+rem;
		n=n/10;
	}
	printf("number reversed = %d",reverse);
	return 0;
}
