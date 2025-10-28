#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the size of the array";
    cin>>n;
    int negatives[n];
    int negCount=0;
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
                negatives[negCount++]=arr[i];
            }
        }

        if(!hasNegative){
            cout<<"All numbers are non negative"<<endl;
        }
        else{
            throw negCount;
        }
    }

    catch(int count){
        cout<<"Exception caught!"<<endl;
        cout<<"Total number of negative numbers found:"<<count<<endl;
    }
    return 0;
}
