#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    double cgpa;
    int cls;
    Student(int roll, int cls, double cgpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->cgpa = cgpa;
    }
};
int main()
{
    Student abir(120017, 9, 4.39);
    cout << abir.roll << " " << abir.cls << " " << abir.cgpa << endl;
    Student akash(120015, 10, 4.95);
    cout << akash.roll << " " << akash.cls << " " << akash.cgpa << endl;
}