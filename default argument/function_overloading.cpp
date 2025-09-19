//function overloading
#include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<"1st function called"<<endl;
    return a+b;
}
double sum(double c, double d){
    cout<<"2nd function called"<<endl;
    return c+d;
}
int main(){
    double x,y;
    int a,b;
    cout<<"Enter the 1st element:"<<endl;
    cin>>x;
    cout<<"Enter the 2nd element:"<<endl;
    cin>>y;
     cout<<"Enter the 1st element:"<<endl;
    cin>>a;
    cout<<"Enter the 2nd element:"<<endl;
    cin>>b;
    cout<<sum(x,y)<<endl;
    cout<<sum(a,b)<<endl;
}
