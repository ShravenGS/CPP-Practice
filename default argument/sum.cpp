#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){
    int x,y;
    cout<<"Enter the 1st element:"<<endl;
    cin>>x;
    cout<<"Enter the 2nd element:"<<endl;
    cin>>y;
    cout<<sum(x,y)<<endl;
    
}
