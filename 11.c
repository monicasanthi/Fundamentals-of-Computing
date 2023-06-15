#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,s=0;
	pow(i,i);
	printf("Enter a number: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		s=s+pow(i,i);
	}
	printf("%d",s);
	return 0;
}
