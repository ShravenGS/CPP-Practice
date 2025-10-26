//Single_inheritence
#include <iostream>
using namespace std;
class A{
    protected://private will not work because due to that we cannot access in the derived class anywhere
    int x=10;
};
class B:public A{
    public:
        void print(){
            cout<<"x="<<x<<endl;
        }
};
int main() {
  B b1;
  b1.print();
    return 0;
}
