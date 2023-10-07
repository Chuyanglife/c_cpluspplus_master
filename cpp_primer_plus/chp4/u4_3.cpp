#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char firstname[20], lastname[20], finalname[50];
    cout<<"Enter your first name: ";
    cin.getline(firstname,20);
    cout<<"Enter your last name: ";
    cin.getline(lastname,20);
    strcpy(finalname,firstname);
    strcat(finalname,", ");
    strcat(finalname,lastname);
    cout<<"Here's the information in a single string: "<<finalname<<endl;
    return 0;
}