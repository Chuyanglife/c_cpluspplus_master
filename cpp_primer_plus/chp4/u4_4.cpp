#include<iostream>
#include<string>
using namespace std;
int main(){
    string firstname,lastname,finalname;
    cout<<"Enter your first name: ";
    getline(cin,firstname);
    cout<<"Enter your last name: ";
    getline(cin,lastname);
    finalname=firstname+", "+lastname;
    cout<<"Here's the information in a single string: "<<finalname<<endl;
    return 0;
}