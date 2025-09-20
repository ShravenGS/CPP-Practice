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
}ob1[2];

int main(){
  int i;
  cout<<"Enter the data..."<<endl;
  for(i=0;i<2;i++){
      ob1[i].setdata();
  }
    
  cout<<"Display the data..."<<endl;
  for(i=0;i<2;i++){
      ob1[i].print();
  }
}
