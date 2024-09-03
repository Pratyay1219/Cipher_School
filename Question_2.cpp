#include<iostream>
using namespace std;
int main (){
    int a;
    int t=0;
    for(int i=0;i<5;i++){
        cout<<"Enter Grade: ";
        cin>>a;
        t+=a;
    }
    float r;
    r=t/5.0;
    cout<<r;
    return 0;
}