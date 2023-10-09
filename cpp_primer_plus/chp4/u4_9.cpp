#include<iostream>
#include<string>
using namespace std;
struct Pizza{
    string company;
    double diameter;
    double weight;
};
int main(){
    Pizza *pizza= new Pizza;
    return 0;
}