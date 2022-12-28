#include<stdio.h>
int main()
{
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  switch(n>0)
   {
   	 case 1:
   	 	printf("Converted number is = %d",-n);
   	 	break;
   	 case 0:
   	 	printf("Converted number is = %d",-n);
   	 	break;
   }
  return 0;
}
