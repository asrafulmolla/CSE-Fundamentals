/*
You need to take one integer value as input and 
tell if the value is positive or negative or zero.
*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>0) printf("positive");
    else if(n<0) printf("negative");
    else printf("zero");
}