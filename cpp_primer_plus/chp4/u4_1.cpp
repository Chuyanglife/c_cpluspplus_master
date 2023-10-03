#include<iostream>
using namespace std;
int main(){
    char firstname[100];
    char lastname[100];
    char grade;
    int age;
    cout<<"What is your first name?";
    cin.getline(firstname,100);
    cout<<"What is your last name?";
    cin.getline(lastname,80);
    cout<<"What letter grade do you deserve?";
    cin>>grade;
    cout<<"What is your age?";
    cin>>age;
    cout<<"Name:"<<lastname<<","<<firstname<<endl;
    cout<<"Grade:"<<grade<<endl;
    cout<<"Age:"<<age<<endl;
    return 0;
}