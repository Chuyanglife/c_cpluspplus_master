#include<iostream>
#include<string>
using namespace std;
struct CandyBar{
    string company;
    double diameter;
    int calories;
};
int main(){
    CandyBar *p_candybar = new CandyBar[3]{
        {"Mocha Munch",2.3,350},
        {"Big Rabbit",5,300},
        {"Joy Boy",4.1,430}
    };
    cout<<"The name of the CandyBar: "<<
    return 0;
}