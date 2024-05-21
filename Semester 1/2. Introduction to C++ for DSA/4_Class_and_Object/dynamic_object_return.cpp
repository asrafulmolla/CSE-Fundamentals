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
Student * fun()
{
    Student *rahim=new Student(20,9,4.99);
    return rahim;
}
int main()
{
    Student *ans=fun();
    cout<<ans->roll<<" "<<ans->cls<<" "<<ans->gpa<<endl; //before delete
    delete ans; // kaj ses delete kore dilam
    cout<<ans->roll<<" "<<ans->cls<<" "<<ans->gpa<<endl; //after delete
}