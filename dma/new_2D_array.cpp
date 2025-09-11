#include<iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout<<"Enter the row and column"<<endl;
    cin>>r>>c;
    int **p=new int *[r];
    for(i=0;i<r;i++){
        p[i]=new int[c];
    }
    cout<<"Enter the elements"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>p[i][j];
        }
    }
    cout<<"Display the elements"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"p["<<i<<"]["<<j<<"]="<<p[i][j]<<endl;
        }
    }
    cout<<"Deallocating memory"<<endl;
    for(i=0;i<r;i++){
        delete[] p[i];
    }
        delete[] p;
        p=NULL;
        cout<<"Display the elements"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"p["<<i<<"]["<<j<<"]="<<p[i][j]<<endl;
        }
    }
}
