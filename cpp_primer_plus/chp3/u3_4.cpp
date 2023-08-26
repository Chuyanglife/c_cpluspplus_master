#include<iostream>
using namespace std;
int main(){
    long sec;
    cout<<"Enter the number of seconds: ";
    cin>>sec;
    const int sec_per_minute=60;
    const int min_per_hour=60;
    const int hour_per_day=24;
    int s,m,h,d;
    int convert;
    s=sec%sec_per_minute;
    cout<<sec<<" seconds = "<<" days,"<<" hours,"<<" minutes,"<<s<<" seconds"<<endl;
    system("pause");
    return 0;
}

