#include<iostream>
using namespace std;
int main(){
    double s=0;
    double ch;
    while(1){
        cout<<"Enter a number (int/double) (0 to exit): ";
        cin>>ch;
        if(ch==0){
            break;
        }
        s+=ch;
    }
    cout<<s<<endl;
    return 0;
}