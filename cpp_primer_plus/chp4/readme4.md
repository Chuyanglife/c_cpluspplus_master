
#### 4.3
---

```cpp=
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char firstname[20], lastname[20], finalname[50];
    cout<<"Enter your first name: ";
    cin.getline(firstname,20);
    cout<<"Enter your last name: ";
    cin.getline(lastname,20);
    strcpy(finalname,firstname);
    strcat(finalname,", ");
    strcat(finalname,lastname);
    cout<<"Here's the information in a single string: "<<finalname<<endl;
    return 0;
}
```

### 4.4
---
```cpp=
#include<iostream>
#include<string>
using namespace std;
int main(){
    string firstname,lastname,finalname;
    cout<<"Enter your first name: ";
    getline(cin,firstname);
    cout<<"Enter your last name: ";
    getline(cin,lastname);
    finalname=firstname+", "+lastname;
    cout<<"Here's the information in a single string: "<<finalname<<endl;
    return 0;
}
```
### 4.5
---
```cpp=
#include<iostream>
using namespace std;
struct CandyBar{
    string name;
    double weight;
    int calories;
};
int main(){
    CandyBar snack={"Mocha Munch",2.3,350};
    cout<<"The name of the CandyBar: "<<snack.name<<endl;
    cout<<"The weight of the candy: "<<snack.weight<<endl;
    cout<<"The calories information: "<<snack.calories<<endl;
    return 0;
}
```
### 4.6
---
```cpp=
#include<iostream>
using namespace std;
struct CandyBar{
    string name;
    double weight;
    int calories;
};
int main(){
    CandyBar candybar[3]={
    {"Mocha Munch",2.3,350},
    {"Big Rabbit",5,300},
    {"Joy Boy",4.1,430}
    };
    cout<<"The name of the CandyBar: "<<candybar[0].name<<endl;
    cout<<"The weight of the candy: "<<candybar[0].weight<<endl;
    cout<<"The calories information: "<<candybar[0].calories<<endl;
    cout<<"The name of the CandyBar: "<<candybar[1].name<<endl;
    cout<<"The weight of the candy: "<<candybar[1].weight<<endl;
    cout<<"The calories information: "<<candybar[1].calories<<endl;
    cout<<"The name of the CandyBar: "<<candybar[2].name<<endl;
    cout<<"The weight of the candy: "<<candybar[2].weight<<endl;
    cout<<"The calories information: "<<candybar[2].calories<<endl;
    return 0;
}
```
### 4.7
---
```cpp=
#include<iostream>
#include<string>
using namespace std;
struct Pizza{
    string company;
    double diameter;
    double weight;
};
int main(){
    Pizza pizza;
    cout << "Enter the pizza company: ";
    getline(cin,pizza.company);
    cout << "Enter the diameter of pizza: ";
    cin>>pizza.diameter;
    cout << "Enter the weight of pizza: ";
    cin>>pizza.weight;
    cout <<endl<< "Here is the pizza information: "<<endl;
    cout<<"Company: "<<pizza.company<<endl;
    cout<<"Diameter: "<<pizza.diameter<<endl;
    cout<<"Weight: "<<pizza.weight<<endl;
    return 0;
}
```
### 4.8
---

