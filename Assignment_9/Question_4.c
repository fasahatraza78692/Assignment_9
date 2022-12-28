#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z,ch;
	while(1)
	 {
	 	system("cls");
	 	printf("1.To check isosceles triangle or not\n");
	 	printf("2.To check right angle triangle or not\n");
	 	printf("3.To check equilateral triangle or not\n");
	 	printf("4.Exit\n");
	 	printf("Enter your choice\n");
	 	scanf("%d",&ch);
	 	switch(ch)
	 	 {
	 	 	case 1:
	 	 	  printf("Enter 3 numbers\n");
		      scanf("%d%d%d",&x,&y,&z);
		      if(x==y||y==z||x==z)
		        printf("Isosceles Triangle\n");
		      else
		        printf("Not Isosceles Triangle\n");
		        break;
		    case 2:
	 	 	  printf("Enter 3 numbers\n");
		      scanf("%d%d%d",&x,&y,&z);
		      x*=x;
		      y*=y;
			  z*=z;
		      if(x==y+z||y==z+x||z==x+y)
		        printf("Right Angle Triangle\n");
		      else
		        printf("Not Right Angle Triangle\n");
		        break;
		    case 3:
	 	 	  printf("Enter 3 numbers\n");
		      scanf("%d%d%d",&x,&y,&z);
		      if(x==y&&y==z)
		        printf("Equilateral Triangle\n");
		      else
		        printf("Not Equilateral Triangle\n");
		        break;
		    case 4:
		    	exit(0);
		 }
		 getch();
	 }
	return 0;
}
