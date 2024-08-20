#include<bits/stdc++.h>
using namespace std;
int left_smaller(vector<int> &v)
{
    for (int i = 0; i < v.size()-1;i++)
    {
        if(v[i]>v[i+1])
        {
            return v[i+1];
        }
    }
}
int right_smaller(vector<int> &v)
{
    for (int i = v.size()-1; i >= 0;i--)
    {
        if(v[i]>v[i+1])
        {
            return v[i+1];
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n;i++)
    {
        cin >> v[i];
    }
    int left = left_smaller(v);
    cout << left<<endl;
    int right = right_smaller(v);
    cout << right;
}