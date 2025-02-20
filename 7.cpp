#include<stdio.h>
#include<conio.h>
int main()
{
	float p,t,r,si;
	printf("enter the principal time and rate");
	scanf("%f%f%f",&p,&t,&r);
	si=(p*t*r)/100;
	printf("the simple interst is %.2f",si);
	getch();
	return 0;
}
