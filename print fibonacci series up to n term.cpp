#include<iostream>
using namespace std;

int main(){
    int n,t 1=0,t2=1,next term;
    cout<<"Enter the number of term:";
    cin>>n;
    for(int i=1;i<=n;i++){
        next Term =t1+t2;
        t1=t2;
        t2=next Term;
    }
    return 0;
}