#include<iostream>
#include<array>
using namespace std;
const int ar_size=100;
int main(){
    array<long double,ar_size> factorials;
    factorials[0]=factorials[1]=1;
    for(int i=2;i<=factorials.size();i++){
        factorials[i]=i*factorials[i-1];
    }
    for(int i=0;i<=factorials.size();i++){
        cout<<i<<"! = "<<factorials[i]<<endl;
    }
    return 0;
}
