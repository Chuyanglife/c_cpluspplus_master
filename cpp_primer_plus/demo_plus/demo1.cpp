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
    cout<<"int: "<<a<<endl;
    cout<<"short: "<<b<<endl;
    cout<<"long: "<<c<<endl;
    cout<<"long long: "<<d<<endl;

    int qq(5);
    int q{1};
    cout<<"qq:"<<qq<<endl<<"q:"<<q<<endl;
    return 0;
}