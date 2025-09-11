#include<iostream>
using namespace std;
int main(){
    int r,c,i,j,k;
    cout<<"Enter the row and column of 1st and 2nd matrix"<<endl;
    cin>>r>>c;
    
    int **a=new int *[r];
    for(i=0;i<r;i++){
        a[i]=new int[c];
    }
    
    int **b=new int *[r];
    for(i=0;i<r;i++){
        b[i]=new int[c];
    }
    
    int **m=new int *[r];
    for(i=0;i<r;i++){
        m[i]=new int[c];
    }
    
    cout<<"Enter the elemets for 1st matrix:"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    
    cout<<"Enter the elemets for 2nd matrix:"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>b[i][j];
        }
    }
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            for(k=0;k<c;k++){
                m[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    
    cout<<"Resultant matrix"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}
