#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    switch(n%2)
    {
        case 0:
        cout<<"Even";
        break;
        case 1:
        cout<<"Odd";
    }
    return 0;
}