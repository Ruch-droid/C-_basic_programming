#include<iostream>
using namespace std;

int c = 45;

int main()
{
    int a, b, c;
    cout<<"enter thr value of a:"<<endl;

    cin>>a;

    cout<<"enter the value of b:"<<endl;
    cin>>b;

    c = a + b;
    cout<<"the sum is: "<<c<< endl;

    cout<<"the value off global variable: "<<::c;
    // the scope resolution is reprresented by :: symbol and used to call global variable when the name of both variable are same.

    return 0;
}