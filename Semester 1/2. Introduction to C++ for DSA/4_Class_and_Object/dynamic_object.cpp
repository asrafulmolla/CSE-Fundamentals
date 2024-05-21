#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->cls=cls;
        this->gpa=gpa;
        this->roll=roll;
    }
};

int main()
{
    Student *rahim=new Student(20,9,4.99);
    cout<<rahim->roll<<" "<<rahim->cls<<" "<<rahim->gpa<<endl;
}