#include <stdio.h>
#include <conio.h>
int main ()
{ int a,b;

	 printf ("enter 3 number  ");
	 
	 scanf ("%d %d ",&a,&b);
	 a=a+b;
	 b=a-b;
	 a=a-b;
	 printf (" %d %d",a,b);

	return 0; 

	getch();
}

