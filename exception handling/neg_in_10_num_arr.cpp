#include <iostream>
using namespace std;
int main() {
    int arr[10],i;
    cout<<"Enter 10 integers:"<<endl;
    try{
        for(i=0;i<10;i++){
            cout<<"Enter the number"<<i+1<<":";
            cin>>arr[i];
            
        if(arr[i]<0){
            throw arr[i];
        }
    }
    cout<<"\nAll numbers are non-negative"<<endl;
    } 
    catch(int n){
        cout<<"\nException caught!Negative number found:"<<n<<endl;
    }

    return 0;
}
