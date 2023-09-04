#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<"Enter your kilometers:";
    double kilometers;
    cin>>kilometers;
    cout<<"Enter your litros:";
    double litros;
    cin>>litros;
    cout<<"Every "<<setprecision(9)<<kilometers<<" kilometers cost "<<setprecision(5)<<litros<<" litros gas in Europe."<<endl;
    cout<<"That means you drive "<<"miles using 1 calons gas in the US."<<endl;
    system("pause");
    return 0;
}