#include<iostream>
using namespace std;
double convert(double celsius){
    double fahrenheit;
    fahrenheit=1.8*celsius+32.0;
    return fahrenheit;
}
int main(){
    cout<<"Please enter a Celsius value: ";
    double celsius;
    cin>>celsius;
    int fahrenheit=convert(celsius);
    cout<<celsius<<" degrees Celsius is "<<fahrenheit<<" degrees Fahrenheit."<<endl;
    system("pause");
    return 0;
}