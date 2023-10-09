#include<iostream>
#include<string>
using namespace std;
struct Pizza{
    string company;
    double diameter;
    double weight;
};
int main(){
    Pizza *pizza = new Pizza;
    cout<<"Enter the diameter of pizza : ";
    cin>>pizza->diameter;
    cout<<"Enter the weight of pizza: ";
    cin>>pizza->weight;
    cout<<"Enter the name of pizza: ";
    
    return 0;
}