#include<iostream>
using namespace std;
int main(){
    long long world,US;
    cout<<"Enter the world's population: ";
    cin>>world;
    cout<<"Enter the population of the US: ";
    cin>>US;
    const int percent = 100;
    float convert = float(US)/float(world)*percent;
    cout<<"The population of the US is "<<convert<<"% of the world population."<<endl;
    
    system("pause");
    return 0;
}
