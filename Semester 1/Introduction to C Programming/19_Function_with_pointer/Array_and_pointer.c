#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    printf("0 th index er Address: %p\n",&a[0]);
    printf("0 th index er Address: %p\n",a);
    // proved array name is one king of pointer
    printf("0 th index er value: %d\n",*a);
    printf("0 th index er value: %d\n",a[0]);

    //int *a=&a[0]

    //jekono ekta adddress jana thakle age & porer address
    //bahir kora *(a+1) samner gorer address dibe minus korle pichoner

    printf("1 th index er address: %p\n",(a+1));

    //next value dekhte chaile

    printf("1 th index er value: %d\n",*(a+1));

    //a[1] -> *(a+1)
    // *(a+1) -> a[1]
    // *(1+a) -> a[1] / 1[a]
    printf("%d\n",*(a+1));
    printf("%d\n",*(1+a));
    printf("%d\n",a[1]);
    printf("%d\n",1[a]);

    //woooooooooooooow interesting 😉
}
    