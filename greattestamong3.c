#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter any three numbers ");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && a>c)
	{
		printf("%d is the greatest",a);
	}
	else if(b>a && b>c)
	{
		printf("%d is the greatest",b);
	}
	else 
	{
		printf("%d is the greatest",c);
	}
	return 0;
}
