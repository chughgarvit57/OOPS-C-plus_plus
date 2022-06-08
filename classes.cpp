#include<iostream>
using namespace std;

class Employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void setData(int a1, int b1, int c1); //Declaration 
    void getData(){
        cout<<"Value of a is "<<a<<"\n";
        cout<<"Value of b is "<<b<<"\n";
        cout<<"Value of c is "<<c<<"\n";
        cout<<"Value of d is "<<d<<"\n";
        cout<<"Value of e is "<<e<<"\n";
    }
};

void Employee :: setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    Employee garvit;
    // garvit.a = 54; will show error that it is private
    garvit.d = 55;
    garvit.e = 65;
    garvit.setData(1,2,4);
    garvit.getData();
    return 0;
}