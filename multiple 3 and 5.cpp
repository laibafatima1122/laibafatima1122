#include<iostream>
using namespace std;

int main(){
     int num;
     cout<<"Enter a number:";
     cin >>num;

     if(num%3==0&&num%5==0)
     {
        cout<<num<<"is a multiple of both 3 and 5.";
     }
     else
     {
        cout<<num<<"is not a muitiple of both 3 and 5.";
     }
     return 0;
}