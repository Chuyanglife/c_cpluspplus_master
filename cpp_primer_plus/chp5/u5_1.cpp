#include<iostream>
using namespace std;
int main(){
    int number1,number2;
    cout<<"Enter the first number: ";
    cin>>number1;
    cout<<"Enter the second number: ";
    cin>>number2;
    if(number1>number2){
        int tmp=number1;
        number1=number2;
        number2=tmp;
    }
    int total_number=0;
    for(int i=number1;i<=number2;i++){
        total_number+=i;
    }
    cout<<"Sum the number from "<<number1<<" to "<<number2<<", sum = "<<total_number<<endl;
    return 0;
}
