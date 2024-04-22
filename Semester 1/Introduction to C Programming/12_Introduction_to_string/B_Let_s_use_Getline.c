#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000001];
    char b[1000001];
    fgets(a,1000001,stdin);
    for(int i=0;a[i]!='\\';i++)
    {
        // if(a[i]=='\\')
        // {
        //     break;
        // }
        // else{
            b[i]=a[i];
        //}
        
    }
    printf("%s",b);
}