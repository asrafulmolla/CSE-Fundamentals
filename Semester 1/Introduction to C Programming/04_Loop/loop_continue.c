#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        if(i==3)
        {
            continue;;
        }
        printf("%d\n",i);
    }

    //output: 1 2 4 5
}