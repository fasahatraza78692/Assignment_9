#include<stdio.h>
int main()
{
  int n;
  printf("Enter a even number\n");
  scanf("%d",&n);
  switch(n%2==0)
   {
   	 case 1:
   	 	printf("It's upper nearest odd number = %d",n+1);
   	 	break;
   	 case 0:
   	 	printf("Not an even number");
   	 	break;
   }
  return 0;
}
