/*
//1_9
#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    for(int i=50;i<=100;i++){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}
*/

/*
//1_10
#include<iostream>
using namespace std;
int main(){
    for(int i=10;i>=0;i--){
        cout<<i<<" ";
    }
    return 0;
}
*/

//1_11
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a<b){
    for(int i=a;i<=b;i++){
        cout<<i<<" ";
    }
    }else{
    for(int i=a;i>=b;i--){
        cout<<i<<" ";
    }   
    }
    return 0;
}