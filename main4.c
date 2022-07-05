#include <stdio.h>
#include <conio.h>
int main()
{
	int l,b,area,perimeter,hypo;
	printf("enter the length of rectangle\n");
	scanf("%d",&l);
	printf("enter the breadth of rectangle\n");
	scanf("%d",&b);
	hypo = l^2+b^2;
	area = (l*b)/2;
	perimeter = l+b+hypo;
	printf("the area of rectangle is %d\n",area);
	printf("the perimeter of rectangle is %d\n",perimeter);
	getch();
}
