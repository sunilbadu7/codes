#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	for(i=1;i<10;i++)
	{
		printf("%d",i);
		printf("\t");
		if(i==5)
		 break;
	}
	getch();
	return 0;
}
