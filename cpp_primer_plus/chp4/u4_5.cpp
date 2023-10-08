#include<iostream>
using namespace std;
struct CandyBar{
    string name;
    double weight;
    int calories;
};
int main(){
    CandyBar snack={"Mocha Munch",2.3,350};
    cout<<"The name of the CandyBar: "<<snack.name<<endl;
    cout<<"The weight of the candy: "<<snack.weight<<endl;
    cout<<"The calories information: "<<snack.calories<<endl;
    return 0;
}