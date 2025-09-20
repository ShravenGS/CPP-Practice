#include<iostream>
using namespace std;
class A{
    private:
    int x;
    char ch;
    public:
    void setdata();
    void print();
};
void A::setdata(){
    cout<<"Enter the x value:"<<endl;
    cin>>x;
    cout<<"Enter the character:"<<endl;
    cin>>ch;
}
void A::print(){
    cout<<"x="<<x<<endl;
    cout<<"ch="<<ch<<endl;
}
int main(){
  A ob1,ob2;
  cout<<"Enter the ob1 data"<<endl;
  ob1.setdata();
  cout<<"Display the ob1 data"<<endl;
  ob1.print();
  cout<<"Enter the ob2 data"<<endl;
  ob2.setdata();
  cout<<"Display the ob2 data"<<endl;
  ob2.print();
  cout<<"Size(ob1)="<<sizeof(ob1)<<endl;
  cout<<"Size(ob2)="<<sizeof(ob2)<<endl;
}
