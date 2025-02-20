#include<stdio.h>
#include<conio.h>
int main()
{
  
    char name[30];
    float b, hra, da, pf, gross;
 
    printf("Enter name: ");
    gets(name);
    printf("Enter Basic Salary: ");
    scanf("%f",&b);
    printf("Enter HRA: ");
    scanf("%f",&hra);
    printf("Enter D.A.: ");
    scanf("%f",&da);
    pf= (b*12)/100;
 
    gross=b+da+hra+pf;
 
    printf("\nName: %s\nBASIC: %.2f\nHRA: %.2f\nDA: %.2f\nPF: %.2f\n---GROSS SALARY: %.2f---",name,b,hra,da,pf,gross);
     
    return 0;
}

