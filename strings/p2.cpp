#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string"<<endl;
    cin>>str;
    cout<<"str->"<<str<<endl;
    cout<<"string length="<<str.length()<<endl;
    cout<<"string append="<<str.append("G")<<endl;
    cout<<"string insert="<<str.insert(1,"S")<<endl;
    cout<<"string erase="<<str.erase(7,8)<<endl;
    cout<<"string erase="<<str.erase(1,1)<<endl;
    cout<<"string erase="<<str.erase()<<endl;
}
