#include<iostream>

using namespace std;
 
 int fib ( int n){
     if (n<2)
     { return 1;
     }
         return fib(n-2)+fib(n-1);
     }
     
     
 

int main(){
int a;
cout<<"Enter the position at which u want to find the fiboonacci series"<<endl;
cin>>a;

cout<<"the term in fibonacci series at position: "<<a<< " is "<<fib(a)<<endl;
    return 0;
} 