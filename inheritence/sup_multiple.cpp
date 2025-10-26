#include <iostream>
#include<string>
using namespace std;
class supermarket{
    public:
        string name;
        string prod;
        int price;
};

class GST{
    public:
    int cs,ss;
};

class discount{
    public:
        int d;
};
class customer:public supermarket,public GST,public discount{
    public:
    int tot;
    
    void setdata(){
        cout<<"----------------------------------"<<endl;
        cout<<"Welcome to D MART"<<endl;
        cout<<"Enter the name:";
        getline(cin,name);
        cout<<"Enter the product name:";
        getline(cin,prod);
        cout<<"Enter the price:";
        cin>>price;
        cout<<"Enter the Central GST:";
        cin>>cs;
        cout<<"Enter the State GST:";
        cin>>ss;
        cout<<"Enter the Discount Amount:";
        cin>>d;
        cout<<"--------------------------------";
    }
    void total(){
        tot=price+cs+cs+ss-d;
    }
    void print(){
       cout<<"----------------------------------";
        cout<<"D MART"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Product name:"<<prod<<endl;
        cout<<"Price:"<<price<<endl;
        cout<<"Central GST:"<<cs<<endl;
        cout<<"State GST:"<<ss<<endl;
        cout<<"Discount Amount:"<<d<<endl;
        cout<<"Total:"<<tot<<endl;
        cout<<"--------------------------------"; 
    }
};
int main() {
  customer c1;
  c1.setdata();
  c1.total();
  c1.print();
    return 0;
}
