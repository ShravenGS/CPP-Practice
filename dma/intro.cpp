#include<iostream>
using namespace std;
int main(){
    int *p;
    p=new int(20);
    //Allocating memory in heap section
    cout<<"p="<<p<<endl;
    cout<<"*p="<<*p<<endl;
    //deallocating memory in heap section
    delete p;
    p=NULL;
    cout<<"p="<<p<<endl;
    cout<<"*p="<<*p<<endl;
}
