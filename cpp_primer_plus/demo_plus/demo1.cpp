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
using namespace std;
int main(){
    int a= INT_MAX;
    short b= SHRT_MAX;
    long c=LONG_MAX;
    long long d=LLONG_MAX;
    cout<<"int: "<<sizeof(int)<<" bytes"<<endl;
    cout<<"short: "<<sizeof(short)<<" bytes"<<endl;
    cout<<"long: "<<sizeof(long)<<" bytes"<<endl;
    cout<<"long long: "<<sizeof(long long)<<" bytes"<<endl;
    cout<<endl;
    cout<<"a "<<a<<endl;
    cout<<"b "<<b<<endl;
    cout<<"c "<<c<<endl;
    cout<<"d "<<d<<endl;
    return 0;
}