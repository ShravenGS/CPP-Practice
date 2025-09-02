#include<iostream>
using namespace std;
int main(){
   int x=10,y=20;
   int *p=&x;
   int *&rp=p;
   
   cout<<"p="<<*p<<",p="<<p<<endl;
   cout<<"rp="<<*rp<<",rp="<<rp<<endl;
   //after changing rp
   rp=&y;
   cout<<"p="<<*p<<",p="<<p<<endl;
   cout<<"rp="<<*rp<<",rp="<<rp<<endl;
}
