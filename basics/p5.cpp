e#include<iostream>
using namespace std;
int main(){
    int x=10,y=20,temp;
    cout<<"Before Swapping "<<x<<" "<<y<<endl;
    temp=x;
    x=y;
    y=temp;
    cout<<"After Swapping "<<x<<" "<<y<<endl;
}

/*#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int x=10,y=20,temp;
    cout<<"Before Swapping "<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<"After Swapping "<<x<<" "<<y<<endl;
}*/
