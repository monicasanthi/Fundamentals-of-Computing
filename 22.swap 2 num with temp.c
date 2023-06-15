#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping:\na=%d \nb=%d",a,b);
	return 0;
}
