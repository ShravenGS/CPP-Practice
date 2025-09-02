#include <iostream>
using namespace std;
int main(){
    string str1,str2,str3;
    cout<<"Enter the string1"<<endl;
    getline(cin,str1);
    cout<<"Enter the string2"<<endl;
    getline(cin,str2);
    str3=str1+" "+str2;//strcat
    cout<<"str1="<<str1<<endl;
    cout<<"str2="<<str2<<endl;
    cout<<"str3="<<str3<<endl;
}
