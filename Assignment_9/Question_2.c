#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,ch;
	while(1)
	 {
	 	system("cls");
	 	printf("1.Addition\n");
	 	printf("2.Subtraction\n");
	 	printf("3.Multiplication\n");
	 	printf("4.Division\n");
	 	printf("5.Exit\n");
	 	printf("Enter your choice\n");
	 	scanf("%d",&ch);
	 	switch(ch)
	 	 {
	 	   case 1:
	 	      printf("Enter 2 numbers\n");
		      scanf("%d%d",&a,&b);
		      printf("Addittion of %d and %d is = %d",a,b,a+b);
		      break;	
		   case 2:
	 	      printf("Enter 2 numbers\n");
		      scanf("%d%d",&a,&b);
		      printf("Subtraction of %d and %d is = %d",a,b,a-b);
		      break;
		   case 3:
	 	      printf("Enter 2 numbers\n");
		      scanf("%d%d",&a,&b);
		      printf("Multiplication of %d and %d is = %d",a,b,a*b);
		      break;		
		   case 4:
	 	      printf("Enter 2 numbers\n");
		      scanf("%d%d",&a,&b);
		      printf("division of %d and %d is = %d",a,b,a/b);
		      break;
		   case 5:
		      exit(0);	
		 }
		 getch();
	 }
	return 0;
}
