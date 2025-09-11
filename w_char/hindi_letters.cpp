#include<iostream>
#include<clocale>
using namespace std;
int main(){
    setlocale(LC_ALL,"");
    wchar_t x=0x0905;//Change the unicode from symbl.cc website
    wcout<<x<<endl;
    wcout<<sizeof(wchar_t)<<endl;
}
