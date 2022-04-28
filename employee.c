#include<stdio.h>
#include<conio.h>
#include<string.h>
struct org
{
char name[30];
int emp_age,salary;
long emp_mobile;
};
void main()
{
struct org employee[20];
int n,i;
printf("\nEnter the number of employeed in your organization(<=20):");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("\nEnter Person %d\n Name :",i+1);
scanf("%s",&employee[i].name);
printf("\nEmployee age :");
scanf("%d",&employee[i].emp_age);
printf("\nEmployee mobile number :");
scanf("%d",&employee[i].emp_mobile);
printf("\nEmployee Salary :");
scanf("%d",&employee[i].salary);
}

printf("\nEmployees Information\n");
for(i=0;i<n;i++)
{
printf("\nPerson %d\n Name : %s",i+1,employee[i].name);
printf("\nEmployee age : %d",employee[i].emp_age);
printf("\nEmployee mobile number : %l",employee[i].emp_mobile);
printf("\nEmployee Salary : %d",employee[i].salary);
}
getch();
}
