#include<iostream>
using namespace std;
class A{
    private:
    int *ptr;
    int size;
    
    public:
    A(int *p,int n){
        int i; 
        ptr=new int[n];
        cout<<"Parameterized Constructor"<<endl;
        for(i=0;i<n;i++){
            ptr[i]=p[i];
        }
    }
    
    void print(int n){
        int i;
        cout<<"ptr=";
        for(i=0;i<n;i++){
            cout<<ptr[i]<<" ";
        }
        cout<<endl;
    }
    
    void modify(int size){
        if(size>0){
            ptr[0]=51;
        }
    }
};

int main(){
    int arr[10],n,i;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    A ob1(arr,n);
    
    cout<<"Before modify:"<<endl;
    ob1.print(n);
    
    A ob2=ob1;
    ob2.print(n);
    
    ob1.modify(n);
    
    ob1.print(n);
}
