#include <iostream>
#include<iomanip>

using namespace std;
// *** MANUPULATOR IN C++ ****
int main(){

int a=3, b=4, c=555;

cout<< ""<< a<<endl;
cout<<""<<b<<endl;
cout<<""<<c<<endl;


cout<< ""<<setw(5)<<a<<endl;  //setw is from iomanip headerfile used to manupulate
cout<<""<<setw(5)<<b<<endl;
cout<<""<<setw(5)<<c<<endl;

    return 0;  
}