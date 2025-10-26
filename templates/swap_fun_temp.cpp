#include<iostream>
using namespace std;
template<class T>
void swapValues(T &a, T &b){
    T temp =a;
    a=b;
    b=temp;
};

int main(){
    int x=10,y=20;
    cout<<"Before swap"<<x<<" "<<y<<endl;
    swapValues(x,y);
    cout<<"After swap"<<x<<" "<<y<<endl;
    
    double p=3.5,q=7.5;
    cout<<"Before swap"<<p<<" "<<q<<endl;
    swapValues(p,q);
    cout<<"After swap"<<p<<" "<<q<<endl;
    return 0;
}
