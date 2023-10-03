#include<iostream>
using namespace std;
int main(){
    char first_name[100];
    char last_name[100];
    char grade;
    int age;
    cout<<"What is your first name?";
    cin.getline(first_name,100);
    cout<<"What is your last name?";
    cin.getline(first_name,80);
    cout<<"What letter grade do you deserve?";
    cin>>grade;
    cout<<"What is your age?";
    cin>>age;
    cout<<"Name:"<<first_name<<last_name<<endl;
    cout<<"Grade:"<<grade<<endl;
    cout<<"Age:"<<age<<endl;
    return 0;
}