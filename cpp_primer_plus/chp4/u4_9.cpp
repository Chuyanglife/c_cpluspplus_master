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
    cout<<"The name of the CandyBar: "<<p_candybar[0].company<<endl;
    cout<<"The diameter of the CandyBar: "<<p_candybar[0].diameter<<endl;
    cout<<"The calories of the CandyBar: "<<p_candybar[0].calories<<endl<<endl;
    cout<<"The name of the CandyBar: "<<(p_candybar+1)->company<<endl;
    cout<<"The diameter of the CandyBar: "<<(p_candybar+1)->diameter<<endl;
    cout<<"The calories of the CandyBar: "<<(p_candybar+1)->calories<<endl<<endl;
    cout<<"The name of the CandyBar: "<<p_candybar[2].company<<endl;
    cout<<"The diameter of the CandyBar: "<<p_candybar[2].diameter<<endl;
    cout<<"The calories of the CandyBar: "<<p_candybar[2].calories<<endl<<endl;
    delete [] p_candybar;
    return 0;
}