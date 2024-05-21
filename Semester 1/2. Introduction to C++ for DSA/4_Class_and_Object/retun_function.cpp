#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)//contructor
    {
        this->cls=cls;
        this->gpa=gpa;
        this->roll=roll;
    }
};
Student fun()
{
    Student rahim(20,9,4.99);
    return rahim; //function return
}
int main()
{
    Student ans=fun();
    cout<<ans.roll<<" "<<ans.cls<<" "<<ans.gpa<<endl;
}