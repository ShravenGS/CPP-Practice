#include<iostream>
using namespace std;
int main(){
   int x=10;
   //int &r;    //invalid
   //int &r=10;  //invalid cannot bind non-const ref to literal
   const int &r=10;//valid case
   const int &r2=++x;//valid
   
   cout<<"x="<<x<<",&x="<<&x<<endl;
   cout<<"r="<<r<<",&r="<<&r<<endl;
   cout<<"r2="<<r2<<",&r2="<<&r2<<endl;
}
