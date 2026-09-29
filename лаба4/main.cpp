#include <iostream>
#include <stdio.h>
#include <math.h>
int main()
{
double x, y, z,result;
printf("x=");
scanf("%lf",&x);
printf("y=");
scanf("%lf",&y);
printf("z=");
scanf("%lf",&z);
result = fabs(y/pow(x,x)-pow(y/x,0.25))+(y-x)*(cos(y)-z/(y-x))/(1+pow(y-x,2));
printf("%.6lf",result);
return 0;
}
