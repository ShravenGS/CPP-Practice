// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class A{
    public:
    int x;
    public:
    void setdata(int a){
        this->x=a;
    }
    void print(){
        cout<<"Current object address="<<this<<endl;
        cout<<"x="<<this->x<<endl;
    }
};
int main(){
    A ob1,ob2;
    cout<<"address of object 1="<<&ob1<<endl;
    cout<<"address of object 2="<<&ob1<<endl;
    cout<<"Enter the data"<<endl;
    ob1.setdata(10);
    ob2.setdata(20);
    cout<<"Display the ob1 data"<<endl;
    ob1.print();
    ob2.print();
}
