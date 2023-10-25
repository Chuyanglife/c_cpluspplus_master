https://blog.csdn.net/CV_Jason/article/details/85244813 long long
char short int long longlong
  1      2     4     4        8    
float double long double

### demo1
---
```cpp=
#include<iostream>
using namespace std;
int main(){
    int a= INT_MAX;
    short b= SHRT_MAX;
    long c=LONG_MAX;
    long long d=LLONG_MAX;
    cout<<"int: "<<sizeof(int)<<" bytes"<<endl;
    cout<<"short: "<<sizeof(short)<<" bytes"<<endl;
    cout<<"long: "<<sizeof(long)<<" bytes"<<endl;
    cout<<"long long: "<<sizeof(long long)<<" bytes"<<endl;
    cout<<endl;
    cout<<"int: "<<a<<endl;
    cout<<"short: "<<b<<endl;
    cout<<"long: "<<c<<endl;
    cout<<"long long: "<<d<<endl;

    int qq(5);
    int q{1};
    cout<<"qq:"<<qq<<endl<<"q:"<<q<<endl;
    return 0;
}
```

### bilibili
---
1. https://www.bilibili.com/video/BV1sK41127iZ?p=4&spm_id_from=pageDriver&vd_source=1046b7a48c2d169417a3d383ad90d42b
2. 