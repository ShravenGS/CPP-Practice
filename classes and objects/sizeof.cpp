#include<iostream>
using namespace std;
class A{
    public:
    int x;
};
int main(){
    //Non member function
    A ob1;
    ob1.x=20;
    cout<<"ob1.x="<<ob1.x<<endl;
    cout<<"size="<<sizeof(ob1.x)<<endl;//size depends upon data type
}
