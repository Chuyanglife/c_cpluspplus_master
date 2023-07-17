#include<iostream>
using namespace std;
void print_time(int h, int m){
    cout<<"Time: "<<h<<":"<<m<<endl;
}
int main(){
    cout<<"Enter the number of hours: ";
    int hours;
    cin>>hours;
    cout<<"Enter the number of minutes: ";
    int minutes;
    cin>>minutes;
    print_time(hours,minutes);
    system("pause");
    return 0;
}