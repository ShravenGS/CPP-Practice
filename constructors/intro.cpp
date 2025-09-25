#include<iostream>
using namespace std;
class A{
  public:
  int x;
  int y;
  public:
 A(){
      x=10;
      y=20;
      cout<<"default constructor"<<endl;
      cout<<"x="<<x<<endl;
      cout<<"y="<<y<<endl;
  }
};
int main(){
    A ob1;
}
