#include<stdio.h>
int main()
{
	int i;
	printf("The numbers from 1 to 100 which is exactly divisible by 7 are as follows:\n");
	for(i=1;i<=100;i++)
	{
		if(i%7==0)
		{
			printf("%d\n",i);
		}
	}
return 0;
}
