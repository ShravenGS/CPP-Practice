#include<iostream>
#include<clocale>
using namespace std;
int main(){
    setlocale(LC_ALL,"");
    wchar_t x=0x1F600;
    wcout<<x<<endl;
    wcout<<sizeof(wchar_t)<<endl;
}
