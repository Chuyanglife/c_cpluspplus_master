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
    
    int height_inches;
    double height_meters;
    const int inches_per_feet=12;
    const double meters_per_inches=0.0254;
    height_inches=feet*inches_per_feet+inches;
    height_meters=height_inches*meters_per_inches;
    
    double weight_kg;
    const double kg_per_pounds=2.2;
    weight_kg=weight/kg_per_pounds;
    cout<<"That means you are "<<height_meters<<" meters height and "<<weight_kg<<" kilograms weight."<<endl;

    double BMI;
    BMI=weight_kg/height_meters
    cout<<"And your BMI is "<<endl;
    system("pause");
    return 0;
}