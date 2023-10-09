#include<iostream>
#include<array>
using namespace std;
int main(){
    array<double,3>result;
    cout<<"Enter three result of the 40 meters running time: "<<endl;
    cin>>result[0];
    cin>>result[1];
    cin>>result[2];
    double ave_result=(result[0]+result[1]+result[2])/3;
    cout<<"The all three time results is are: "<<result[0]<<", "<<result[1]<<", "<<result[2]<<endl;
    cout<<"The average result is: "<<ave_result<<endl;
    return 0;
}