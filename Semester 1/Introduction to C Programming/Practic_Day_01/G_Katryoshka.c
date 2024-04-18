#include<stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    if((a<=b && a<=c))
    {
        printf("%lld",a);
    }
    else if((c<=b && c<=a))
    {
        printf("%lld",c);
    }
    else //if(a>c>b || c>a>b)
    {
        long long d=(a-b);
        long long e= c-b;
        long long f=d/2;
        if(f>=e)
        {
            printf("%lld",(c-b)+b);
        }
        else 
        {
            printf("%lld",b+d/2);
        }
        
    }
}