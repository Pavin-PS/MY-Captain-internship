#include <stdio.h>

int sum(int N)
{
	if(N!=0)
		return(N%10+sum(N/10));
	else
		return 0;
}

int main()
{
	int N;
	printf("Enter a number - ");
	scanf("%d",&N);
	printf("sum of the digits of %d is: %d",N, sum(N));
	return 0;
}
