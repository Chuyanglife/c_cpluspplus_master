
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a<b){
    while(a<=b){
        cout<<a<<" ";
        a++;
    }
    }else{
        while(a>=b){
            cout<<a<<" ";
            a--;
        }
    }
    cout<<endl;
    return 0;
}