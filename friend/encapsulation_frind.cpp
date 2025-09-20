#include<iostream>
using namespace std;
class ABC;
class XYZ{
    private:
    int x;
    
    public:
    void setdata(){
        cout<<"Enter the x value..."<<endl;
        cin>>x;
    }
    void print(){
        cout<<"x="<<x<<endl;
    }
    friend void add(XYZ &ob4, ABC &ob5);
};
class ABC{
    private:
    int x;
    
    public:
    void setdata(){
        cout<<"Enter the x value..."<<endl;
        cin>>x;
    }
    void print(){
        cout<<"x="<<x<<endl;
    }
    friend void add(XYZ &ob4, ABC &ob5);
};

void add(XYZ &ob4, ABC &ob5){
    int ret;
    cout<<"Add function is called...."<<endl;
    ret=ob4.x+ob5.x;
    cout<<"ret="<<ret<<endl;
}
int main(){
    XYZ ob1;
    ABC ob2;
    
    cout<<"Enter the ob1 data..."<<endl;
    ob1.setdata();
    ob1.print();
    
    cout<<"Enter the ob2 data..."<<endl;
    ob2.setdata();
    ob2.print();
    
    cout<<"Add function..."<<endl;
    add(ob1,ob2);
}
