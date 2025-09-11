#include<iostream>
using namespace std;
int main(){
    int *p=new int[5];
    int i;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<5;i++){
        cin>>p[i];
    }
    cout<<"display the elements"<<endl;
    for(i=0;i<5;i++){
        cout<<"p["<<i<<"]="<<p[i]<<endl;
    }
    cout<<"deallocating memory"<<endl;
    delete [] p;//deallocating memory
    p=NULL;
    for(i=0;i<5;i++){
        cout<<"p["<<i<<"]="<<p[i]<<endl;
    }
}
