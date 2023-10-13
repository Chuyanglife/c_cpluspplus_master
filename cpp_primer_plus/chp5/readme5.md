### 5.1
---
```cpp=
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
```
### 5.2
---
```cpp=
#include<iostream>
#include<array>
using namespace std;
const int ar_size=100;
int main(){
    array<long double,ar_size> factorials;
    factorials[0]=factorials[1]=1;
    for(int i=2;i<=factorials.size();i++){
        factorials[i]=i*factorials[i-1];
    }
    for(int i=0;i<=factorials.size();i++){
        cout<<i<<"! = "<<factorials[i]<<endl;
    }
    return 0;
}
```
### 5.3
---
```cpp=
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
        cout<<"Until now, the sum of the number you inputed is: "<<s<<endl;
    }
    
    return 0;
}
```
### 5.4
---
```cpp=
#include<iostream>
using namespace std;
int main(){
    double daphne_acc=100;
    double cleo_acc=100;
    int year=0;
    while(cleo_acc<=daphne_acc){
        year++;
        daphne_acc+=10;
        cleo_acc+=cleo_acc*0.05;
    }
    cout<<"After "<<year<<" Years."<<"Cleo's accounts is "<<cleo_acc<<" while more than the one of Daphne which is "
    <<daphne_acc<<"."<<endl;
    return 0;
}
```
### 5.5
---
```cpp=
#include<iostream>
#include<string>
using namespace std;
int main(){
    string months[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int sell[12];
    int total_sales=0;
    cout<<"Enter the sales of book <<C++ for Fools>> each month." << endl;
    for(int i=0;i<=12;i++){
        cout<<months[i]=":";
        cin>>sell[i];
        total_sales+=sell[i];
    }
    cout<<"The total sales is "<<total_sales<<endl;
    for(int i=0;i<=12;i++){
        cout<<months[i]=": "<<sell[i]<<endl;
    }
    return 0;
} 
```
### 5.7
---
```cpp=

```
### 5.8
---
```cpp=

```
### 5.9
---
```cpp=

```
### 5.10
---
```cpp=

```