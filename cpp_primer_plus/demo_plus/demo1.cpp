/* #include<iostream>
using namespace std;
int main(){
    //cout<<"mapukila dad";
   // cin.get();
   //cout<<"mapukila mom"<<endl;
    //cin.get();
    int a,b,c;
    cin>>a>>b;
    c=a%b;
    cout<<c<<endl;
    //system("pause");
    return 0;
}  */
#include<iostream>
using namespace std;
int main(){
    int q;
    while(cin>>q){
        if(q==0){break;}
        int i=0;
        i+=q;
        cout<<q<<endl;
    }
    return 0;
}