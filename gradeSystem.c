#include<stdio.h>

void main()
{
	printf("Enter your Marks: ");
	int Marks;
	scanf("%d" ,&Marks);
	
	if(Marks<0 || Marks>100)
	{
		printf("wrong entry!!!");
	}
	
	else if(Marks<100 && Marks>=85)
	{
		printf("Grade - A");
	}
	
	else if(Marks<84 && Marks>=70)
	{
		printf("Grade - B");
	}
	
	else if(Marks<69 && Marks>=55)
	{
		printf("Grade - C");
	}
	
	else if(Marks<54 && Marks>=40)
	{
		printf("Grade - D");
	}
	
	else {
		printf("Grade - F");
	}
	
}
