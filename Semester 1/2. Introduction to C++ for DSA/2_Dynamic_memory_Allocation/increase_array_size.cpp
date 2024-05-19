#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int [3];
    int *b = new int [3];
    for(int i=0;i<3;i++) 
    {
        cin>>a[i];  //input 3 size array
        b[i]=a[i]; // copy array value
    }
    for(int i=0;i<3;i++)
    {
        cout<<a[i]<<" "; // before delete array a
    }
    cout<<endl;
    delete []a;
    for(int i=0;i<3;i++)
    {
        cout<<a[i]<<" "; // after delete array a
    }
    a= new int [5]; // array size increase
    for(int i=0;i<3;i++)
    {
        a[i]=b[i]; // new a te b er copy value assign
    }
    delete []b; // delete array b
    for(int i=3;i<5;i++)
    {
        cin>>a[i];  // extra value input after increase
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" "; // increase array output
    }
}