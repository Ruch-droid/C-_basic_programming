#include<iostream>
using namespace std;


class employee
{
    private:
int a,b,c;
    public:
    int d,e;
    void setData(int a,int b,int c);
    void getData(){

        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of a is: "<<b<<endl;
        cout<<"The value of a is: "<<c<<endl;
        cout<<"The value of a is: "<<d<<endl;
        cout<<"The value of a is: "<<e<<endl;
    }
};

void employee :: setData(int a1, int b1, int c1){
    a= a1;
    b= b1;
    c= c1;
}

int main(){

    employee ruch;
    ruch.d=43;
    ruch.e=23;
    ruch.setData(3,2,4);
    ruch.getData();
    


    return 0;
}