#include<stdio.h>
int main()
{
    // for(int i=1;i<=5;i++)
    // {
    //     if(i==3)
    //     {
    //         break;
    //     }
    //     printf("%d\n",i);
    // }

    //output: 1 2

    for(int i=1;i<=5;i++)
    {
        printf("%d\n",i);
        if(i==3)
        {
            break;
        }
    }

    //output: 1 2 3
}