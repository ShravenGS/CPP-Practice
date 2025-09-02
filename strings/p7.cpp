#include <iostream>
using namespace std;
int main(){
    string str1,str2,str3;
    cout<<"Enter the string1"<<endl;
    getline(cin,str1);
    cout<<"Enter the string2"<<endl;
    getline(cin,str2);
    if(str1==str2){
        cout<<"Equal"<<endl;
    }
    else{
        cout<<"Not equal";
    }
}
