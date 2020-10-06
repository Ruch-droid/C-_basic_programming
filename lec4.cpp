#include<iostream>
using namespace std;
// ****TYPE CASTING****
int main(){
 float a= 54.7704;

 int x=50;
 cout<<"the value of x is: "<<(float)x<<endl;
 cout<<"the value of x is: "<<(float(x))<<endl;

 cout<<"the value of a is: "<<(int)a<<endl;
 cout<<"the value of a is: "<<(int(a))<<endl;
int c=int(x);

cout<<"The expression is "<<a + x<<endl;
cout<<"The expression is "<<a + int(x)<<endl;
cout<<"The expression is "<<a + (int(x))<<endl;

    return 0; 
}  