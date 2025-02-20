#include<stdio.h>
#include<conio.h>
int main()
 {
	int sci;
	int math;
	int eng;
	int tot;
	float per;
	printf("enter the marks in 3 subject");
	scanf("%d%d%d",&sci,&math,&eng);
 	 tot = sci + math + eng;
 	 per = (float) tot * 100 / 300;
  	printf("Total Marks: %d\n", tot);
  	printf("Percentage is: %.2f\n", per);
	if (per >= 60)
	{
	    printf("First division\n");
	} 
	  else if (per >= 50)
	{
	    printf("Second division");
	}
	  else if (per >= 40)
	{
	    printf("Third division");
	} 
	  else
	{
	    printf("Fail\n");
	}
	getch();
	return 0;
}

