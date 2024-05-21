#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    double cgpa;
    int cls; 
    Student(int r,int c,double cg)
    {
        roll=r;
        cls=c;
        cgpa=cg;
    }
};
int main()
{
    Student abir(120017,9,4.39);
    cout << abir.roll <<" "<< abir.cls<<" "<<abir.cgpa<<endl;
    Student akash(120015,10,5.00);
    cout << akash.roll <<" "<< akash.cls<<" "<<akash.cgpa<<endl;
}