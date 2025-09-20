#include<iostream>
using namespace std;
class A{
    
    private:
    int x;
    friend int main();
};

int main(){
  A ob1;
  ob1.x=20;
  cout<<"ob1.x="<<ob1.x<<endl;
}
