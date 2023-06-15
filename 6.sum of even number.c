#include<stdio.h>
int main()
{
  int Num, i, Sum = 0;
  printf("\n Enter any Integer Value\n");
  scanf("%d", &Num);
  for(i = 2; i <= Num; i+=2)
  {
     Sum = Sum + i;
  }
  printf("Sum = %d", Sum);
  return 0;
}
