#include<iostream>
using namespace std;
void changevalue(int& x){
    x=100;
}
int main(){
    int a=10;
    cout<<"a="<<a<<endl;
   changevalue(a);
    cout<<"a="<<a<<endl;
    return 0;
}
