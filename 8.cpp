#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("it is even");
	}
	else
	{
		printf("it is odd");
	}
	getch();
	return 0;
}
