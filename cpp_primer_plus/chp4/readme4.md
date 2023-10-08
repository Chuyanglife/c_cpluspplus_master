
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

