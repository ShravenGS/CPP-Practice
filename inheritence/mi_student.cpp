#include<iostream>
#include<string>
using namespace std;

class Student{
    protected:
        int roll;
        string name;
    
    public:
        void getData(){
            cout<<"Enter the roll number:";
            cin>>roll;
            cin.ignore();
            cout<<"Enter name:";
            getline(cin,name);
        }
        
        void print(){
            cout<<"\nRoll number:"<<roll;
            cout<<"\nName:"<<name;
        }
};

class Exam:public Student{
    int i;
    protected:
        int marks[6];
        
    public:
        void setmark(){
         for(i=0;i<6;i++){
             cout<<"Subject "<<i+1<<": ";
             cin>>marks[i];
            }   
        }
        
         void getmarks(){
            for(i=0;i<6;i++){
                cout<<"Subject "<<i+1<<": "<<marks[i]<<endl;;
                }   
        }
        
        int gettotal(){
            int total=0;
            for(i=0;i<6;i++){
                total+=marks[i];
            }
            return total;
        }
};
class Result: public Exam{
    int total_marks;
    float average;
    
    public:
        void calculateResult(){
            total_marks=gettotal();
            average=total_marks/6.0;
        }
        
        void displayresult(){
            print();
            getmarks();
            cout<<"\nTotal marks:"<<total_marks;
            cout<<"\nAverage Marks:"<<average<<endl;
        }
};
int main(){
    Result r;
    r.getData();
    r.setmark();
    r.calculateResult();
    r.displayresult();
}
