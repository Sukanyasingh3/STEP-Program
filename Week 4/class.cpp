#include<iostream>
using namespace std; 

class Company{
    string name;
    string adress; 
}com; 

class Employee:public Company{
    public:
    string empid; 
    string name; 
}emp;

class Adress: public Employee{
    public:
    string line1;
    string line2;
    string city; 
    int pincode; 
}add; 

class displayemployee:public Employee{
    public:
    void display() {
        cout << "Employee ID: " << emp.empid << endl;
        cout << "Employee Name: " << emp.name << endl;
        cout << "Address Line 1: " << add.line1 << endl;
        cout << "Address Line 2: " << add.line2 << endl;
        cout << "City: " << add.city << endl;
        cout << "Pincode: " << add.pincode << endl;
    }
};

int main() {
    displayemployee dis;

    cout << "Classes made" << endl;

    cout << "Enter Employee ID: ";
    cin >> emp.empid;

    cout << "Enter Employee Name: ";
    cin >> emp.name;

    cout << "Enter Address Line 1: ";
    cin >> add.line1;

    cout << "Enter Address Line 2: ";
    cin >> add.line2;

    cout << "Enter City: ";
    cin >> add.city;

    cout << "Enter Pincode: ";
    cin >> add.pincode;

    cout << "\nEmployee Details:\n";
   dis.display();

    return 0;
}
