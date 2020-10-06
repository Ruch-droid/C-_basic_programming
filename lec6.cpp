#include<iostream>
//Wap to find the factorial of a number

//n!=n*(n-1))
using namespace std;

int factorial(int n)
{
    if (n<=0){
    return 1;
    }
 return n*factorial(n-1);
}
int main(){
int a;
cout<<"Enter the number"<<endl;

cin>>a;
cout<<"The facorial of a is: "<<factorial(a)<<endl;


    return 0;
}