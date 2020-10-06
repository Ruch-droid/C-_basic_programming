#include<iostream>
using namespace std;

 int sum(int a,int b){
     cout<<"using ftn with 2 argument"<<endl;
     return (a+b);
     }

     int sum(int a,int b , int c){
         cout<<"using ftn with 3 argument"<<endl;
     return (a+b+c);
 }
int main(){

cout<<"The sum of 3,6 is: "<< sum(3,6)<<endl;

cout<<"The sum of 3,6 and 7 is: "<< sum(3,6,7)<<endl;
    return 0;
}    