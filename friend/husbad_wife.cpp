#include<iostream>
using namespace std;
class wife;
class husband{
    private:
    char name[20];
    int sal;
    
    public:
    void setdata(){
        cout<<"------------------------------"<<endl;
        cout<<"Enter the husband details"<<endl;
        cout<<"Enter the name:"<<endl;
        cin>>name;
        cout<<"Enter the salary"<<endl;
        cin>>sal;
        cout<<"------------------------------"<<endl;
    }
    void print(){
        cout<<"------------------------------"<<endl;
        cout<<"Husband details->"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Salary:"<<sal<<endl;
        cout<<"------------------------------"<<endl;
    }
    friend void add(husband &h, wife &w);
};
class wife{
    private:
    char name[20];
    int sal;
    
    public:
    void setdata(){
        cout<<"------------------------------"<<endl;
        cout<<"Enter the wife details"<<endl;
        cout<<"Enter the name:"<<endl;
        cin>>name;
        cout<<"Enter the salary"<<endl;
        cin>>sal;
        cout<<"------------------------------"<<endl;
    }
    void print(){
        cout<<"------------------------------"<<endl;
        cout<<"Wife details->"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Salary:"<<sal<<endl;
        cout<<"------------------------------"<<endl;
    }
    friend void add(husband &h, wife &w);
};

void add(husband &h, wife &w){
    int total;
    cout<<"Add function is called...."<<endl;
    total=h.sal+w.sal;
    cout<<"total="<<total<<endl;
}
int main(){
    husband h;
    wife w;
    
    
    h.setdata();
    h.print();
    
    w.setdata();
    w.print();


    add(h,w);
}
