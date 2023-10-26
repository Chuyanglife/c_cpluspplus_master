/* #include<iostream>
using namespace std;
int main(){
    //cout<<"mapukila dad";
   // cin.get();
   //cout<<"mapukila mom"<<endl;
    //cin.get();
    int a,b,c;
    cin>>a>>b;
    c=a%b;
    cout<<c<<endl;
    //system("pause");
    return 0;
}  */
#include<iostream>
#define ZERO 0;
using namespace std;
int main(){
    short a = SHRT_MAX;
    unsigned short aa= a;
    cout<<"short:"<<a<<endl;
    cout<<"unsigned short:"<<aa<<endl;
    a= a+1;
    aa= aa+1;
    cout<<"short:"<<a<<endl;
    cout<<"unsigned short:"<<aa<<endl;
    a=ZERO;
    aa=ZERO;
    aa=a-1;
    cout<<"short:"<<a<<endl;
    cout<<"unsigned short:"<<aa<<endl;
    return 0;
}