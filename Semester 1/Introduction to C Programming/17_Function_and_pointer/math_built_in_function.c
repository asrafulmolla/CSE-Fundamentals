#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void ceil_f(double x)
{
    printf("ceil = %f\n",ceil(x));
}

void floor_f(double x)
{
    printf("floor = %f\n",floor(x));
}

void round_f(double x)
{
    printf("round = %f\n",round(x));
}

void sqrt_f(double x)
{
    printf("sqrt = %f\n",sqrt(x));
}

void pow_f(double x,double y)
{
    printf("pow = %f\n",pow(x,y));
}

void abs_f(double y)
{
    printf("abs = %f\n",abs(y));
}

int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);

    ceil_f(a);
    floor_f(a);
    round_f(a);
    sqrt_f(a);
    pow_f(a,b);
    abs_f(b);
}