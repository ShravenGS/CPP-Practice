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
    int **q=new int *[r];
    for(i=0;i<r;i++){
        q[i]=new int[c];
    }
    int **m=new int *[r];
    for(i=0;i<r;i++){
        m[i]=new int[c];
    }
    cout<<"Enter the elements for 1st 2d array"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>p[i][j];
        }
    }
    
    cout<<"Enter the elements for 2nd 2d array"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>q[i][j];
        }
    }
    
    
    cout<<"Display the elements for 1st 2d array"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"p["<<i<<"]["<<j<<"]="<<p[i][j]<<endl;
        }
    }
    
    cout<<"Display the elementsfor 2nd 2d array"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"q["<<i<<"]["<<j<<"]="<<q[i][j]<<endl;
        }
    }
    cout<<"Adding 2 arrays"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            m[i][j]=p[i][j]+q[i][j];
        }
    }
    
    cout<<"After adding the elements"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"m["<<i<<"]["<<j<<"]="<<m[i][j]<<endl;
        }
    }
    
    
    cout<<"Deallocating memory"<<endl;
    for(i=0;i<r;i++){
        delete[] p[i];
    }
        delete[] p;
        
        
        for(i=0;i<r;i++){
        delete[] q[i];
    }
        delete[] q;
        q=NULL;
        
        for(i=0;i<r;i++){
        delete[] m[i];
    }
        delete[] m;
        m=NULL;
        
   /* cout<<"Display the elements for 1st 2d array"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"p["<<i<<"]["<<j<<"]="<<p[i][j]<<endl;
        }
    }
    
    cout<<"Display the elementsfor 2nd 2d array"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"q["<<i<<"]["<<j<<"]="<<q[i][j]<<endl;
        }
    }
    
    cout<<"After adding the elements"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"m["<<i<<"]["<<j<<"]="<<m[i][j]<<endl;
        }
    }*/
    
}
