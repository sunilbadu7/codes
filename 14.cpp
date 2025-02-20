#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("enter a number and its power");
	scanf("%d%d",&a,&b);
	//using pow........
	c=pow(a,b);
	printf("the value are:\n");
	printf("using pow()=%d \n",c);
	getch();
	return 0;	
}
