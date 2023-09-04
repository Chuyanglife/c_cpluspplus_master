#include <iostream>
using namespace std;
int main(){
    long long miles,calons;
    cout<<"Enter your miles:";
    cin>>miles;
    cout<<"Enter your calons:";
    cin>>calons;
    float rate=(float)miles/(float)calons;
    cout<<"You drive "<<rate<<" miles using"<<" 1 calon gas"<<endl;
    system("pause");
    return 0;
}