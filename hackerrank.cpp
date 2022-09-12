#include<iostream>
//#include<cstdio>
using namespace std;


int main() {
    // Complete the code.
    // to read data type scanf("`format_specifier`", &val)
    char ch;
    int num;
    double d;
    long l;
    double f;
    
    
    cin>>num;
    cin>>l;
    cin>>ch;
    cin>>f;
    cin>>d;
    
    cout<<num<<endl;
    cout<<l<<endl;
    cout<<ch<<endl;
    cout<<fixed<<setprecision(3)<< f<<endl;
    cout<<fixed<<setprecision(9)<<d<<endl;
    
    
    
    return 0;
}
