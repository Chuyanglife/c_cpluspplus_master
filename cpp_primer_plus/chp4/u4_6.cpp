#include<iostream>
using namespace std;
struct CandyBar{
    string name;
    double weight;
    int calories;
};
int main(){
    CandyBar candybar[3]={
    {"Mocha Munch",2.3,350},
    {"Big Rabbit",5,300},
    {"Joy Boy",4.1,430}
    };
    cout<<"The name of the CandyBar: "<<candybar[0].name<<endl;
    cout<<"The weight of the candy: "<<candybar[0].weight<<endl;
    cout<<"The calories information: "<<candybar[0].calories<<endl<<endl;
    cout<<"The name of the CandyBar: "<<candybar[1].name<<endl;
    cout<<"The weight of the candy: "<<candybar[1].weight<<endl;
    cout<<"The calories information: "<<candybar[1].calories<<endl<<endl;
    cout<<"The name of the CandyBar: "<<candybar[2].name<<endl;
    cout<<"The weight of the candy: "<<candybar[2].weight<<endl;
    cout<<"The calories information: "<<candybar[2].calories<<endl;
    return 0;
}