#include<stdio.h>
int main()
{
	int d;
	printf("Enter the day number\n");
	scanf("%d",&d);
	switch(d)
	 {
	 	case 1:
	 	 	printf("It's Monday today");
	 	 	break;
		case 2:
		 	printf("It's Tuesday today");
	 	 	break;
		case 3:
			printf("It's Wednessday today");
	 	 	break;
		case 4:
		 	printf("It's Thursday today");
	 	 	break;
		case 5:
		 	printf("It's Friday today");
	 	 	break;
		case 6:
		 	printf("It's Saturday today");
	 	 	break;
		case 7:
		 	printf("It's Sunday today");
	 	 	break;
		 default:
		 	printf("Invalid Input");
		 	
	 }
}
