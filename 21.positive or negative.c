#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	if(num>=0)
	printf("The given integer is positive.");
	else
	printf("The given integer is negative.");
	return 0;
}
