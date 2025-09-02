#include<iostream>
using namespace std;
namespace A{
    int x=10;
}
namespace B{
    int x=30;
}
namespace C{
    int x=30;
}
namespace D{
    int x=40;
}
int main(){
    {
        cout<<"inside the block"<<endl;
        using namespace A;
        cout<<"x="<<x<<endl;
    }
    cout<<"outside the block"<<endl;
    using namespace B;
    cout<<"x="<<x<<endl;
}
