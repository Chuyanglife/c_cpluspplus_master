#include<iostream>
using namespace std;
int main(){
    double daphne_acc=100;
    double cleo_acc=100;
    int year=0;
    while(cleo_acc<=daphne_acc){
        year++;
        daphne_acc+=10;
        cleo_acc+=cleo_acc*0.05;
    }
    cout<<"After "<<year<<" Years."<<"Cleo's accounts is "<<cleo_acc<<" while more than the one of Daphne whick is "
    <<daphne_acc<<"."<<endl;
    return 0;
}