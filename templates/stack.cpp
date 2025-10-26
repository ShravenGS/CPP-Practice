#include <iostream>
using namespace std;
template <class T>
class Stack{
  private:
  int top;
  int size;
  T* arr;//dynamic array to store stack elements

public:
Stack(int s){
    size=s;
    top =-1;//Empty stack
    arr=new T[size];//allocate memory dynamically
}
~Stack(){
    delete[] arr;
}

void push(T value){
    if(top>=size-1){
        cout<<"Stack overflow!"<<endl;
        return;
    }
    arr[++top]=value;
    cout<<value<<"pushed to stack"<<endl;
}
T pop(){
    if(top<0){
        cout<<"Stack underflow!"<<endl;
        return T();
    }
    T val=arr[top--];
    cout<<val<<"popped from stack"<<endl;
    return val;
    }
    void display(){
        if(top<0){
            cout<<"Stack is empty"<<endl;
            return;
        }
        cout<<"Stack elements:"<<endl;
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
            cout<<endl;
        }
        
    }
};
int main() {
    int size;
    cout<<"Enter the size of stack";
    cin>>size;
    Stack<int>s1(size);//object creation
    int choice;
    do{
        cout<<"\n----Stack menu-----\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice){
            case 1:{
                int val;
                cout<<"Enter the value to push";
                cin>>val;
                s1.push(val);
                break;
            }
            case 2:
                s1.pop();
                break;
            case 3:
            s1.display();
            break;
            
            case 4:
            cout<<"EXITING......"<<endl;
            break;
            
            default:
            cout<<"Invalid choice...."<<endl;
        }
    }while(choice<4);
    
    return 0;
}
