#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student a,b;
    // a.name = "Asraful";
    // a.roll = 120017;
    // a.cgpa = 3.95;
    // cout << a.name << endl;
    // cout << a.roll << endl;
    // cout << a.cgpa << endl;
//     cin>>b.name>>b.roll>>b.cgpa;
//     cout<<b.name<<endl;
//     cout<<b.roll<<endl;
//     cout<<b.cgpa<<endl;

    //space input
    cin.getline(a.name,100);
    //getchar();
    cin>>a.roll>>a.cgpa;
    cout << a.name << endl;
    cout << a.roll << endl;
    cout << a.cgpa << endl;
}