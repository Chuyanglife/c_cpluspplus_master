#include<iostream>
using namespace std;
double convert(double lightyear){
    double astronomical = lightyear*63240;
    return astronomical;
}
int main(){
    cout<<"Enter the number of light years: "<<endl;
    double light_year;
    cin>>light_year;
    double astronimical_units=convert(light_year);
    cout<<light_year<<" light years = "<<astronimical_units<<" astronimical units."<<endl;
    system("pause");
    return 0;
}