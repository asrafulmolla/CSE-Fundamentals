#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    char b[101];
    scanf("%s %s",a,b);
    int i=0;
    while(1)
    {
        if(a[i]=='\0' && b[i]=='\0')
        {
            printf("Same\n");
            break;
        }
        else if(a[i]=='\0')
        {
            printf("A is Small");
            break;
        }
        
        if(a[i] == b[i])
        {
            i++;
        }
        else if(a[i]<b[i])
        {
            printf("A is small\n");
            break;
        }
        else
        {
            printf("B is small\n");
            break;
        }
    }
}