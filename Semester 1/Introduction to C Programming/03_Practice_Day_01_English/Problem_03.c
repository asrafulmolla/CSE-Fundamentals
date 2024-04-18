/*
You need to take one non-negative integer (0 or greater than 0) 
value as input and tell if it is even or odd.
*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0) printf("even");
    else printf("odd");
}