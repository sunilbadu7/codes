#include<stdio.h>
int main()
{
	int a,b,i,sum=0;
	printf("Enter range of any two numbers :");
	scanf("%d%d",&a,&b);
		
		for(i=a;i<b;i++)
		{
			if(i%2==0)
			{
			sum=sum+i;
	    	}
			
		}
		printf("%d",sum);
		return 0;
	}
	
