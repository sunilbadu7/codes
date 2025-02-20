#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d;
	printf("enter any two numbers \t");
	scanf("%d%d",&a,&b);
	c=a+b;
	d=c/2;
	printf("sum = %d \t average = %d",c,d);
	getch();
	return 0;	
}
