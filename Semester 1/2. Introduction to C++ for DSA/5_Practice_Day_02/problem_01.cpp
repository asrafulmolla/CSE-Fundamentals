#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(string name,int roll,char section,int math_marks,int cls)
    {
        this->name=name;
        this->cls=cls;
        this->math_marks=math_marks;
        this->roll=roll;
        this->section=section;
    }
};
int main()
{
    Student rafik("Rafik",1,'a',96,9);
    Student Safiq("Safik",2,'b',98,9);
    Student kuddus("Kuddus",3,'c',99,9);
    cout<<rafik.name<<" "<<rafik.roll<<" "<<rafik.section<<" "<<rafik.math_marks<<" "<<rafik.cls<<endl;
    cout<<Safiq.name<<" "<<Safiq.roll<<" "<<Safiq.section<<" "<<Safiq.math_marks<<" "<<Safiq.cls<<endl;
    cout<<kuddus.name<<" "<<kuddus.roll<<" "<<kuddus.section<<" "<<kuddus.math_marks<<" "<<kuddus.cls<<endl;
    if(rafik.math_marks>Safiq.math_marks && rafik.math_marks>kuddus.math_marks)
    {
        cout<<rafik.name;
    }
    else if(Safiq.math_marks>rafik.math_marks && Safiq.math_marks>kuddus.math_marks)
    {
        cout<<Safiq.name;
    }
    else
    {
        cout<<kuddus.name;
    }
}