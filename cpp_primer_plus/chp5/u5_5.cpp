#include<iostream>
#include<string>
using namespace std;
int main(){
    string months[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int sell[12];
    int total_sales=0;
    cout<<"Enter the sales of book <<C++ for Fools>> each month." << endl;
    for(int i=0;i<=12;i++){
        cout<<months[i]=":";
        cin>>sell[i];
        
    }
    return 0;
} 
