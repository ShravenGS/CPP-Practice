#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the size of the array";
    cin>>n;

    int arr[n];
    bool hasNegative=false;

    cout<<"Enter the integer"<<endl;

    try{
        for(i=0;i<n;i++){
            cout<<"Enter the number:";
            cin>>arr[i];
        }
        cout<<"Checking numbers...."<<endl;
        for(i=0;i<n;i++){
            if(arr[i]<0){
                hasNegative=true;
                throw arr[i];
            }
        }

        if(!hasNegative){
            cout<<"All numbers are non negative"<<endl;
        }
    }

    catch(int neg){
        cout<<"Exception caught!"<<endl;
    }
    return 0;
}
