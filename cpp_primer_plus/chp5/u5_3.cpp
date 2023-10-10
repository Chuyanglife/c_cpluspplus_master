#include<iostream>
using namespace std;
int main(){
    double s=0;
    double ch;
    while(cin>>ch){
        cout<<"Enter a number (int/double) (0 to exit): ";
        if(ch==0){
            break;
        }
        s+=ch;
    }
    cout<<""
    return 0;
}