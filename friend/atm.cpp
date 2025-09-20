#include<iostream>
using namespace std;
class ATM;
class bank{
    private:
    char name[20];
    char accno[20];
    int amount;
    
    public:
    void setdata(){
        cout<<"------------------------------"<<endl;
        cout<<"Welcome to my bank"<<endl;
        cout<<"Enter the name:"<<endl;
        cin>>name;
        cin.getline(accno,20);
        cout<<"Enter the account number:"<<endl;
        cin>>accno;
        cout<<"Enter the amount"<<endl;
        cin>>amount;
        cout<<"------------------------------"<<endl;
    }
    void print(){
        cout<<"------------------------------"<<endl;
        cout<<"------ACCOUNT DETAILS---------"<<endl;
        cout<<"Enter the name:"<<name<<endl;
        cout<<"Enter the account number:"<<accno<<endl;
        cout<<"Enter the amount"<<amount<<endl;

        cout<<"------------------------------"<<endl;
    }
    friend class ATM;
};
class ATM{
    public:
    void cash(bank &ob4);
    void deposit(bank &ob5);
    void balance(bank &ob6);
};
void ATM::cash(bank &ob4){
    int w;
    cout<<"Cash withdraw function is called"<<endl;
    cout<<"Enter the amount to withdraw:"<<endl;
    cin>>w;
    if(w>ob4.amount){
        cout<<"Insufficient balance"<<endl;
    }
    else{
        ob4.amount-=w;
        cout<<"Withdrawl successful"<<endl;
    }
}

void ATM::deposit(bank &ob5){
    int d;
    cout<<"Deposit function is called"<<endl;
    cout<<"Enter the amount to deposit"<<endl;
    cin>>d;
    ob5.amount+=d;
    cout<<"Deposit successful"<<endl;
}
void ATM::balance(bank &ob6){
    cout<<"Current balance:"<<ob6.amount<<endl;
}
int main(){
   bank ob1;
   ATM ob2;
   int op;
   while(1){
       cout<<"Enter the option"<<endl;
       cout<<"1. Setdata"<<endl;
       cout<<"2. Print"<<endl;
       cout<<"3. Withdraw"<<endl;
       cout<<"4. Deposit"<<endl;
       cout<<"5. Balance"<<endl;
       cout<<"6. Exit"<<endl;
       cin>>op;
       
       switch(op){
           case 1:
           ob1.setdata();
           break;
           case 2:
           ob1.print();
           break;
           case 3:
           ob2.cash(ob1);
           break;
           case 4:
           ob2.deposit(ob1);
           break;
           case 5:
           ob2.balance(ob1);
           break;
           case 6:
           cout<<"EXIT"<<endl;
           return 0;
           default:
           cout<<"Invalid option"<<endl;
       }
   }
   return 0;
}
