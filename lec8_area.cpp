#include<iostream>

using namespace std;
//area of circle
 int area(int r){
     cout<<"area of a circle is: "<<endl;
     return(3.14 *r*r);
 }

 int area(int l , int b)
 { 
     cout<<"area of a rectangle is: "<<endl;
     return(l*b) ;
 }

 /*area of a traiangle
     int area (int b,int h){
     cout<<"area of a trainagle is: "<<endl;
     return(1/2*b*h);
     }*/
 int main(){
 cout<<area(8)<<endl;
 cout<<area(5,7)<<endl;
 cout<<area(2,3)<<endl;

     return 0;
 }