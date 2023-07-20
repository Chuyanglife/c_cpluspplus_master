#include<iostream>
using namespace std;
int main(){
    int feet,inches,weight;
    cout<<"Enter your feet: ";
    cin>>feet;
    cout<<"Enter your inches: ";
    cin>>inches;
    cout<<"Enter your weight: ";
    cin>>weight;
    cout<<"So you are "<<feet<<" feet and "<<inches<<" inches height and "<<weight<<" pounds weight."<<endl;
    
    int height_feet,height_inches;
    double height_meters;
    const int feet_per_inches=12;
    height_feet=feet*feet_per_inches;
    height_meters=height_feet+inches;
    cout<<"That means you are "<<height_meters<<" meters height and "<<" kilograms weight."<<endl;
    cout<<"And your BMI is "<<endl;
    system("pause");
    return 0;
}