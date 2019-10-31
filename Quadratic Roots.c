#include<stdio.h>
#include<math.h>
int main()
{
    double a=2.0,b=5.0,c=2.0,x=0.0,y=0.0;
    x=b*b-4*a*c;
    printf("b*b-4ac is : %lf\n",x);
    x=sqrt(x);
    printf("Square Root b*b-4ac is : %lf\n",x);
    y=b-x;
    x=b+x;
    printf("b- Square Root is : %lf & %lf\n",x,y);
    y=y/(2*a);
    x=x/(2*a);
    printf("Quadratic Roots are : %lf & %lf\n",x,y);
}
