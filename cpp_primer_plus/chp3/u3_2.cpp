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
    const int inches_per_feet=12;
    const double meters_per_inches=0.0254;
    const double kg_per_pounds=2.2;
    height_inches=feet*inches_per_feet+inches;
    height_meters=height_inches+;
    cout<<"That means you are "<<height_meters<<" meters height and "<<" kilograms weight."<<endl;
    cout<<"And your BMI is "<<endl;
    system("pause");
    return 0;
}