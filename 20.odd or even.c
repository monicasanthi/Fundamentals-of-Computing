#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	if(num%2==0)
	printf("The given integer is even.");
	else
	printf("The given integer is odd.");
	return 0;
}
