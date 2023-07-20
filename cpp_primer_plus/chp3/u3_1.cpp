#include<iostream>
using namespace std;
int main(){
    cout<<"Enter your height: ";
    int height;
    cin>>height;
    int feet,inches;
    const int inches_per_height =12;
    feet = height/inches_per_height;
    inches = height%inches_per_height;
    cout<<"That means you are "<<feet<<" feet and "<<inches<<" inches height."<<endl;
    system("pause");
    return 0;
}