#include<iostream>
using namespace std;
int main(){
    int deg,min,sec;
    double latitude=0;
    cout<<"Enter a latitude in degrees, minutes, and seconds:"<<endl;
    cout<<"First, enter the degrees: ";
    cin>>deg;
    cout<<"Next, enter the minutes of arc: ";
    cin>>min;
    cout<<"Finally, enter the seconds of arc: ";
    cin>>sec;
    
    cout<<deg<<" degrees, "<<min<<" minutes, "<<sec<<" seconds = "<<latitude<<" degrees"<<endl;
    system("pause");
    return 0;
}