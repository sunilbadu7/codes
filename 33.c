#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any two number:\n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping a=%d b=%d",a,b);
	return 0;
}