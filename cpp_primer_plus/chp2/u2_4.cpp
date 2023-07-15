#include<iostream>
using namespace std;
int convert(int age){
    return 12 * age;
}
int main(){
    cout<<"Enter your age: ";
    int age;
    cin>>age;
    int month = convert(age);
    cout<<"Your age in months is: "<<month<<endl;
    system("pause");
    return 0;
}