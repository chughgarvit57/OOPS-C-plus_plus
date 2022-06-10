#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
    void setData(void){
        cout<<"Enter id of the person: "<<"\n";
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"The id of this employee is: "<<id<<" and the count of this employee is "<<count<<"\n";
    }
};

int Employee :: count; // Default value is zero

int main(){
    Employee Avi,Piyush,Manya;
    // Avi.id = 8; cannot access as it is private
    // Avi.count = 8; can't access this also as it is private
    Avi.setData();
    Avi.getData();

    Piyush.setData();
    Piyush.getData();
    
    Manya.setData();
    Manya.getData();
    return 0;
}