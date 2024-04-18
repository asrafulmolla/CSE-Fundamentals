#include<stdio.h>
int main()
{
    //integer
    // int a=1234567891; //total 10 digit
    // int b=12345678910; //11 not print
    // printf("%d \n%d",a,b);

    //long long int
    // long long int a=1231111110111213171; //total 19 digit
    // long long int b=12311111101112131712; //20 not print
    // printf("%lld \n%lld",a,b);

    //float
    // float a=123.111111; //total 9 digit
    // float b=1.2345678910; //not print
    // printf("%f \n%f",a,b);

    //double
    double a=1.111101112134567; //total 16 digit
    double b=1.2345678910; //not print
    printf("%0.15lf \n%lf",a,b);
}