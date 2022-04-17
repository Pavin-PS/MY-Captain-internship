#include<stdio.h>

main()
{
	printf("Pick The Food Item Which You want to Eat:\n 1. Veg Cheese Burger - Rs140.\n 2. Spring Roll - Rs90.\n 3. Parota - Rs30.\n 4. Pizza - Rs280.\n 5. Pasta - Rs130.");
	
	int Choice = 0;
	scanf("%d",&Choice);
	
	switch(Choice)
	{
		case 1:
			printf("Order Placed.....\n Food Item: Veg Cheese Burger.\n Price - Rs140.");
			break;
		case 2:
			printf("Order Placed.....\n Food Item: Spring Roll.\n Price - Rs90.");
			break;
		case 3:
			printf("Order Placed.....\n Food Item: Parota.\n Price - Rs30.");
			break;
		case 4:
			printf("Order Placed.....\n Food Item: Pizza.\n Price - Rs280.");
			break;
		case 5:
			printf("Order Placed.....\n Food Item: Pasta.\n Price - Rs130.");
			break;
		default: printf("Invalid Choice");
	}
	
}
