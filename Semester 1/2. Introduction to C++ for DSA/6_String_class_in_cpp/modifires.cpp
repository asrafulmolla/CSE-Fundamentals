#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    //****************//string added//************
    // s+="Hatem";
    // string s2;
    // s2="ali";
    // cout<<s+s2<<endl;

    //****************//string append//************
    // string s2;
    // s2="ali";
    // cout<<s.append(s2)<<endl;
    
    //****************//string push_back//************
    // s.push_back('A'); // A char inseart kore dibe
    // cout<<s<<endl;
    
    //****************//string pop_back//************
    // s.pop_back(); // last char delete kore dibe
    // cout<<s<<endl;
    
    //****************//string assign//************
    // s="Hello";
    // s.assign("Gello");
    // cout<<s<<endl;
    
    //****************//string erase//************
    // string a="HelloWorld";
    // a.erase(5,2);//5 er pore 2 char delete kore dibe
    // cout<<a<<endl;
    // a.erase(4); //4 er pore sob delete kore dibe
    // cout<<a<<endl;
    
    //****************//string replace//************
    // string a="HelloWorld";
    // a.replace(5,2,"Khao");//5 er pore 2 char delete kore khao replace kore dibe
    // cout<<a<<endl;
    
    //****************//string insert//************
    string a="HelloWorld";
    a.insert(5," Asraful ");//5 er pore Asraful insert kore dibe
    cout<<a<<endl;
    a.erase(5,9);
    cout<<a<<endl;
    a.replace(5,0," Khao ");
    cout<<a<<endl;
}