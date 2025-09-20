#include<iostream>
using namespace std;
class A{
    
    private:
    int x;
    friend void print(A &ob4);
};
void print(A &ob4){
    cout<<"Print function is called..."<<endl;
    cout<<"ob4.x="<<ob4.x<<endl;
}

int main(){
  A ob1;
 print(ob1);
}
