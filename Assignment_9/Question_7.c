#include<stdio.h>
int main()
{
  int n;
  float x;
  printf("Enter the electricity units\n");
  scanf("%d",&n);
  switch(n<=50)
   {
   	  case 1:
   	  	x=n*0.50;
   	  	x=x+x*20/100;
   	  	printf("Total Electricity Bill = %.2f",x);
   	  	break;
   	  case 0:
   	  	switch(n>50&&n<=150)
   	  	 {
   	  	 	case 1:
   	  	 	 x=(n-50)*0.75;
   	  	     x=x+50*0.50;
   	  	     x=x+x*20/100;
   	  	     printf("Total Electricity Bill = %.2f",x);
   	  	     break;
   	  	    case 0:
   	  	    	switch(n>150&&n<=250)
                  {
   	                case 1:
   	  	               x=(n-150)*1.20;
   	  	               x=x+50*0.50;
   	  	               x=x+100*0.75;
					   x=x+x*20/100;
   	               	   printf("Total Electricity Bill = %.2f",x);
   	  	               break;
   	  	            case 0:
   	  	               x=(n-250)*1.50;
   	  	               x=x+50*0.50;
					   x=x+100*0.75;
					   x=x+100*1.20;
					   x=x+x*20/100;
   	               	   printf("Total Electricity Bill = %.2f",x);
   	  	               break;
                  }
		}     
   }
 return 0;
}
