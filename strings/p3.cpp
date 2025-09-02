#include<iostream>
using namespace std;
int main(){
    string str1;
    string str2;
    cout<<"Enter the string 1"<<endl;
    getline(cin,str1);
    cout<<"Enter the string 2"<<endl;
    getline(cin,str2);
    cout<<"Before swapping....."<<endl;
    cout<<str1<<endl;
    cout<<str2<<endl;
    
    str1.swap(str2);
    cout<<"After Swapping....."<<endl;
    cout<<str1<<endl;
    cout<<str2<<endl;
}
