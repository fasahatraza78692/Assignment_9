#include<stdio.h>
int main()
{
    int a,b,c,D;
    float x,y;
    printf("Enter the coefficient of x^2, x and constant\n");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    switch(D<0)
    {
    case 1:
        printf("Both roots are imaginary\n");
        break;
    case 0:
        switch(D==0)
        {
        case 1:
            printf("Both roots are equal\n");
            x=-b/(2.0*a);
            printf("Roots = %.2f",x);
            break;
        case 0:
            switch(D>0)
            {
            case 1:
                printf("Roots are real and distinct\n");
                x=(-b+sqrt(D))/(2*a);
                y=(-b-sqrt(D))/(2*a);
                printf("x = %.2f\ny = %.2f",x,y);
                break;
            }
        }

    }

    return 0;
}
