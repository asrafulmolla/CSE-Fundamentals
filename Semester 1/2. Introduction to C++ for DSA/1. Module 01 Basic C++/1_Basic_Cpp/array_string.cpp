#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    char s[100];
    cin>>n;
    getchar(); //input enter ta ke vanish kore diyache
    cin.getline(s,100);
    cout<<n<<endl<<s;
}