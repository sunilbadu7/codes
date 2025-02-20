#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("enter a number");
	scanf("%d",&a);
	//using pow........
	b=pow(a,3);
	printf("the value are:\n");
	printf("using pow()=%d",b);
	//without using pow...
	c=a*a*a;
	printf("without using pow - %d",c);
	getch();
	return 0;	
}
