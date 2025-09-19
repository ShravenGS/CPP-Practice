//function overloading
#include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<"1st function called"<<endl;
    return a+b;
}
// if we type int sum(int a,int b=15) and then we did not add any b value 
//then it will take the default value which is present in the formal parameter
//else the values will be taken from the main function
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
