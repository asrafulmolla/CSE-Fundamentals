/*
jodi 5000 tk ba tar beshi thake tahole coxs bazar jabo
jodi 10000 tk thake tahole coxs bazar theke sent martin jabo
na hole ferot asbo jodi 5000 tk kom thake thole kothao jabo na.*/
#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=5000)
    {
        printf("Coxs Bazar Jabo\n");

        if(tk>=10000)
        {
            printf("Sent martin jabo");
        }
        else
        {
            printf("Ferotasbo");
        }
    }
    else
    {
        printf("Kothao Jabo na");
    }
}