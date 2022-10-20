#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
 double x, y;
 printf("Enter x:");
 scanf("%lf", &x);

 if( x>= -10 && x < -2)
 y = pow(x,3) - 2*pow(x, 2) + fabs(x);

 else if ( x >= 4 && x < 12 )
 y = 2*sqrt(x-2) - pow((pow(x, 3) - 1)/sqrt(x+2), 3);

 else if ( x >= 100 && x < 10000 )
 y = log10(2*x)/4;

 else
 y = -(x/5) + 2;

 system("cls");
 printf("x = %lf", x);
 printf("\ny = %lf", y);
 return 0;
}
