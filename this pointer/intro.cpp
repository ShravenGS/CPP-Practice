#include <iostream>
using namespace std;
class A{
    public:
    int x=5;
    public:
    void print(){
        cout<<"Current object data="<<this<<endl;
        cout<<"x="<<x<<endl;
    }
};
int main(){
    A ob1;
    cout<<"address of object 1="<<&ob1<<endl;
    cout<<"display the ob1 data"<<endl;
    ob1.print();
}
