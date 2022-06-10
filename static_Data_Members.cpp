#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter id of the person: "
             << "\n";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is: " << id << " and the count of this employee is " << count << "\n";
    }
    // Static functions now 
    static void getCount(){
        cout<<"The value of count is "<<count<<endl;
    }
};

// count is the static data member of the class Employee
int Employee ::count=1000; // Default value is zero

int main()
{
    Employee Avi, Piyush, Manya;
    // Avi.id = 8; cannot access as it is private
    // Avi.count = 8; can't access this also as it is private
    Avi.setData();
    Avi.getData();
    Employee::getCount();

    Piyush.setData();
    Piyush.getData();
    Employee::getCount();

    Manya.setData();
    Manya.getData();
    Employee::getCount();
    return 0;
}