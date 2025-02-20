#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("enter the age of the person ");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("can vote");
	}
	else
	{
		printf("can't vote");
	}
	getch();
	return 0;
}
