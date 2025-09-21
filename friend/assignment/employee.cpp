#include <iostream>
#include<string>
using namespace std;
class EMPLOYEE{
    private:
    string name;
    int empno;
    double basic;
    double DA;
    double IT;
    double netSalary;
    
    public:
    void setdata(){
        cout<<"Enter your name:";
        cin>>name;
        cin.ignore();
        cout<<"Enter employee number:";
        cin>>empno;
        getline(cin,name);
        cout << "Enter Basic Salary: ";
        cin >> basic;
        cout << "Enter DA (Dearness Allowance): ";
        cin >> DA;
        cout << "Enter IT (Income Tax): ";
        cin >> IT;
        
        
        netSalary=basic+DA-IT;
    }
    
    void print(){
        cout<<"-----------------------------"<<endl;
        cout<<"Employee Number:"<<empno<<endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basic << endl;
        cout << "DA: " << DA << endl;
        cout << "IT: " << IT << endl;
        cout << "Net Salary: " << netSalary << endl;
        cout << "---------------------------" << endl;
    }
};
int main() {
    EMPLOYEE emp1;
    
    emp1.setdata();
    
    emp1.print();
}
