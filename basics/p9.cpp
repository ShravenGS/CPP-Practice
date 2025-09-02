#include<iostream>
using namespace std;
int main(){
    int i;
   int a[]={10,20,30,40,50};
   int (&ra)[5]=a;//reference to array
   
   for(i=0;i<5;i++){
       cout<<"ra["<<i<<"]="<<ra[i]<<endl;
   }
   cout<<"a="<<a<<" a+1="<<a+1<<endl;
   cout<<"ra="<<ra<<" ra+1="<<ra+1<<endl;
}
