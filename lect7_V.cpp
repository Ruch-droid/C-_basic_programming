#include<iostream>

using namespace std;
//volume of cuboid
int vol(int l, int b, int h){
    cout<<"volume of cuboid is: "<<endl;
    return (l*b*h);
}
//volume of a cylinder 

int vol(double r , int h){
    cout<<"volume of cylinder is: "<<endl;
    return(3.14*r*r*h);
}

//volume of a cube
int vol(int a)
{
    cout<<"volume of a cubr is:"<<endl;
    return(a*a*a);
}

int main(){

cout<<vol(3,4,6)<<endl;
cout<<vol(9,8)<<endl;
cout<<vol(9)<<endl;

return 0;  
}   