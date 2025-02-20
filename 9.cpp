#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter any 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d is greatest",a);
	}
	else if(b>a && b>c)
	{
		printf("%d is greatest",b);
	}
	else
	{
		printf("%d is greatest",c);
	}
	getch();
	return 0;
}
