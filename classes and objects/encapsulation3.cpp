#include<iostream>
using namespace std;
class A{
    
    private:
    int x;
    
    public:
    void setdata(){
        cout<<"Enter the x value:"<<endl;
        cin>>x;
    }
    void print(){
         cout<<"x="<<x<<endl;
    }
    void add(A &ob4, A &ob5){
        cout<<"Add function is called....."<<endl;
        x=ob4.x+ob5.x;
    }
    
};
int main(){
  A ob1,ob2,ob3;
  cout<<"Enter the ob1 data"<<endl;
  ob1.setdata();
  cout<<"Display the ob1 data"<<endl;
  ob1.print();
  cout<<"Enter the ob2 data"<<endl;
  ob2.setdata();
  cout<<"Display the ob2 data"<<endl;
  ob2.print();
  cout<<"Add function...."<<endl;
  ob3.add(ob1,ob2);
  cout<<"Display the ob3 data"<<endl;
  ob3.print();
  cout<<"Size(ob1)="<<sizeof(ob1)<<endl;
  cout<<"Size(ob2)="<<sizeof(ob2)<<endl;
  cout<<"Size(ob3)="<<sizeof(ob3)<<endl;
}
