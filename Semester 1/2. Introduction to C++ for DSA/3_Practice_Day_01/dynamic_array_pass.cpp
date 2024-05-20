#include<bits/stdc++.h>
#include<string.h>
#include<cctype>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl cout<<"\n"
#define in cin>>
#define out cout<<
#define ll long long
#define ull unsigned long long int
using namespace std;

void asraful(int *a)
{
    for(int i=0;i<3;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int *a= new int [3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    asraful(a);
}