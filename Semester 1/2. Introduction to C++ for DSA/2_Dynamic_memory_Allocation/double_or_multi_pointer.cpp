#include<bits/stdc++.h>
using namespace std;
int ** fun()
{
    int *a=new int;
    *a=100;
    cout<<"Fun : "<<&a<<endl;
    return &a;
}

int main()
{
    int **p = fun();
    cout<<"main : "<<p;
}